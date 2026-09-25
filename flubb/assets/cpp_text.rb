# Turning authored source text into C++ string literals. Shared by every
# parser in this folder.

# Pull in the data about the tiny font
require_relative 'tiny_font.rb'

MARKDOWN_LINK = /
  (?<image>!)?
  \[ (?<label>[^\[\]]*) \]
  \( (?<target>[^()\s]*(?:\([^()]*\)[^()\s]*)*) (?:\s+"[^"]*")? \)
/x

def strip_markdown_links(text)
  text.gsub(MARKDOWN_LINK) { $~[:image] ? "" : $~[:label] }
end

# Mirrors utf8FoldTypography in lib/Utf8/Utf8.cpp. The reading serif carries
# ASCII plus Latin-1 only, and a codepoint it lacks draws nothing at all rather
# than a box, so anything above U+00FF has to become ASCII here.
TYPOGRAPHY_FOLDS = {
  "\u00A0" => " ", "\u2000" => " ", "\u2001" => " ", "\u2002" => " ",
  "\u2003" => " ", "\u2004" => " ", "\u2005" => " ", "\u2006" => " ",
  "\u2007" => " ", "\u2008" => " ", "\u2009" => " ", "\u200A" => " ",
  "\u2028" => " ", "\u2029" => " ", "\u202F" => " ", "\u205F" => " ",
  "\u3000" => " ",
  "\u00AD" => "", "\u200B" => "", "\u200C" => "", "\u200D" => "",
  "\u2060" => "", "\uFEFF" => "",
  "\u2010" => "-", "\u2011" => "-", "\u2012" => "-", "\u2013" => "-",
  "\u2043" => "-", "\u2212" => "-",
  "\u2014" => "--", "\u2015" => "--",
  "\u02BC" => "'", "\u2018" => "'", "\u2019" => "'", "\u201A" => "'",
  "\u201B" => "'", "\u2032" => "'",
  "\u201C" => '"', "\u201D" => '"', "\u201E" => '"', "\u201F" => '"',
  "\u2033" => '"',
  "\u2022" => "*", "\u2023" => "*", "\u25AA" => "*", "\u25CF" => "*",
  "\u25E6" => "*",
  "\u2026" => "...", "\u2039" => "<", "\u203A" => ">",
  "\u2044" => "/", "\u2215" => "/",
  "\u20AC" => "EUR", "\u2122" => "(TM)",
  "\u2190" => "<-", "\u2192" => "->", "\u2194" => "<->", "\u21D2" => "=>",
  "\u2248" => "~=", "\u2260" => "!=", "\u2264" => "<=", "\u2265" => ">=",
  "\uFB00" => "ff", "\uFB01" => "fi", "\uFB02" => "fl", "\uFB03" => "ffi",
  "\uFB04" => "ffl"
}.freeze

# The variation selectors are a contiguous range rather than sixteen rows.
FOLD_PATTERN = Regexp.union(TYPOGRAPHY_FOLDS.keys + [/[\uFE00-\uFE0F]/]).freeze

def fold_typography(text)
  text.gsub(FOLD_PATTERN) { |c| TYPOGRAPHY_FOLDS.fetch(c, "") }
end

# Folded and escaped, for a field that is one line. Fold first: a curly quote
# becomes a straight one, which then still has to be escaped.
def cpp_string(text)
  fold_typography(text).gsub(/[\\"]/) { |c| "\\#{c}" }
end

# Wraps at whitespace to `width`, trailing space included: C++ glues adjacent
# literals verbatim, so a split that drops the space welds two words together.
# The \\S+ alternative catches a word longer than the width, which would
# otherwise match nothing and silently drop the rest of the string.
def wrap_text(text, width = 80)
  text.strip.scan(/\S.{0,#{width - 2}}(?:\s+|\z)|\S+/)
end

# The pixels a note has to wrap inside, derived from the card's own geometry:
# body 480 - 2 * kMargin(16), less 2 * kCardPad(12), less kNoteIndent(22).
SMALL_FONT_LINE_WIDTH_PX = 402

def small_font_word_wrap(text, limit = SMALL_FONT_LINE_WIDTH_PX)
  space = tiny_font_advance(' ')
  final_lines = []
  current_line = ''
  current_length = 0

  text.split(/\s+/).reject(&:empty?).each do |word|
    word_length = tiny_font_width(word)
    gap = current_line.empty? ? 0 : space

    if !current_line.empty? && current_length + gap + word_length > limit
      final_lines << current_line
      current_line = ''
      current_length = 0
      gap = 0
    end

    # A word wider than the whole line still overflows when it is alone on one,
    # so it is broken by character. Without this the line is emitted too long
    # and the caller has no way to tell.
    if word_length > limit
      chunks = small_font_hard_break(word, limit)
      final_lines.concat(chunks[0..-2])
      current_line = chunks.last
      current_length = tiny_font_width(chunks.last)
      next
    end

    current_line += gap.zero? ? word : " #{word}"
    current_length += gap + word_length
  end

  final_lines << current_line unless current_line.empty?
  final_lines
end

# A bullet line in the source looks like "  * Maneuver: Add +1". The marker is
# kept and re-indented; the hanging prefix aligns continuation lines under the
# text rather than under the star.
BULLET_PATTERN = /\A[*-]\s+/
BULLET_PREFIX = '   * '
BULLET_HANGING = '     '

# Drops a leading blank and collapses runs, so a bullet's own leading blank and
# one already in the source do not stack into a double gap.
def squeeze_blank_lines(lines)
  lines.each_with_object([]) do |line, kept|
    next if line.empty? && (kept.empty? || kept.last.empty?)
    kept << line
  end
end

# Wraps text that has its own line structure: every bullet is preceded by a
# blank line and keeps its marker, everything else is prose. Run this after
# strip_markdown_links and fold_typography, or widths measure absent glyphs.
def small_font_text_block(text, limit = SMALL_FONT_LINE_WIDTH_PX)
  bullet_budget = limit - tiny_font_width(BULLET_PREFIX)

  lines = text.split("\n").flat_map do |line|
    line = line.strip
    next [''] if line.empty?
    next small_font_word_wrap(line, limit) unless line.match?(BULLET_PATTERN)

    body = line.sub(BULLET_PATTERN, '')
    wrapped = small_font_word_wrap(body, bullet_budget).map.with_index do |chunk, i|
      (i.zero? ? BULLET_PREFIX : BULLET_HANGING) + chunk
    end
    [''] + wrapped
  end

  squeeze_blank_lines(lines)
end

def small_font_hard_break(word, limit = SMALL_FONT_LINE_WIDTH_PX)
  chunks = []
  chunk = ''
  chunk_length = 0
  word.chars.each do |letter|
    letter_size = tiny_font_advance(letter)
    if !chunk.empty? && chunk_length + letter_size > limit
      chunks << chunk
      chunk = ''
      chunk_length = 0
    end
    chunk += letter
    chunk_length += letter_size
  end
  chunks << chunk unless chunk.empty?
  chunks
end

def cpp_literal(text, width: 45, indent: 5)
  wrapped_text = wrap_text(cpp_string(text), width)
  wrapped_text
    .map.with_index { |chunk, i| chunk.strip + ( (i < wrapped_text.size - 1) ? "\\n" : "") }
    .map { |chunk| "#{' ' * indent}\"#{chunk}\"" }
    .join("\n")
end
