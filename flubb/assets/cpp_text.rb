# Turning authored source text into C++ string literals. Shared by every
# parser in this folder.

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

def cpp_literal(text, width: 45, indent: 5)
  wrapped_text = wrap_text(cpp_string(text), width)
  wrapped_text
    .map.with_index { |chunk, i| chunk.strip + ( (i < wrapped_text.size - 1) ? "\\n" : "") }
    .map { |chunk| "#{' ' * indent}\"#{chunk}\"" }
    .join("\n")
end
