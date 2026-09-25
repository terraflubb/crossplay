#!/usr/bin/env bash

# DIGEST BOT: Watches for the script to change, then... it digests.
while true; do ls *.rb | entr -cd ruby asset_parser.rb; done
