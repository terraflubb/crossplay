require 'json'

# require_relative, not require: a bare name searches $LOAD_PATH, which has not
# included the script's own directory since Ruby 1.9.
require_relative 'cpp_text'

def render_asset(final_asset)
  abilities_as_rows =
    final_asset[:abilities]
      .map{|x| cpp_literal(x)}
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
      content = strip_markdown_links(ability["Text"])
      final_asset[:abilities] << content
    end
    asset_count = asset_count + 1
    # We're debugging this one.
    puts render_asset(final_asset)
    # if asset_count == 1
    #   exit 0
    # end

  end

end
