require 'json'

# require_relative, not require: a bare name searches $LOAD_PATH, which has not
# included the script's own directory since Ruby 1.9.
require_relative 'cpp_text'

# One ability, as adjacent C++ literals one per wrapped line. Fold before
# wrapping so widths are measured against glyphs the font carries, and escape
# after, so a folded curly quote still gets its backslash.
def render_ability(ability, indent: 5)
  lines = small_font_text_block(fold_typography(strip_markdown_links(ability)))
  lines
    .map.with_index { |line, i| cpp_string(line) + (i < lines.size - 1 ? "\\n" : "") }
    .map { |line| "#{' ' * indent}\"#{line}\"" }
    .join("\n")
end

def render_asset(final_asset)
  abilities_as_rows = final_asset[:abilities]
    .map { |ability| render_ability(ability) }
    .join(",\n")

<<-ASSET_CODE
{
  "#{cpp_string(final_asset[:name])}",
  "#{cpp_string(final_asset[:type])}",
  {
#{abilities_as_rows}
  }
},
ASSET_CODE
end

DEBUG_NUMBER = -1

assets = JSON.parse(File.read("assets.json"))
asset_count = 0

assets.each do |asset_type|
  asset_type_name = asset_type["Name"]
  asset_type["Assets"].each do |asset|
    asset_name = asset["Name"]

    final_asset = {
      name: asset_name,
      type: asset_type_name,
      abilities: [],
    }

    asset["Abilities"].each do |ability|
      # It starts with a big blob of raw text
      content = ability["Text"]
      final_asset[:abilities] << content
    end
    asset_count += 1

    if DEBUG_NUMBER >= 0
      if asset_count == DEBUG_NUMBER
        puts render_asset(final_asset)
        exit 0
      end
    else
      puts render_asset(final_asset)
    end
  end
end
puts "// Total Asset Cards: #{asset_count}"
