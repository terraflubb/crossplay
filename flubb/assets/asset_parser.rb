# Tool to digest dataforged JSON into something we can read
require 'json'

assets = JSON.parse(File.read("assets.json"))

assets.each do |group|
  puts group["Name"]
  group.each do |asset|
    pp asset[0]
  end
  exit 0
end
