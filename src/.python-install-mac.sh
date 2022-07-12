osascript -e 'tell app "Terminal"
    do script "brew install python"
    do script "python --version"
end tell'
