# script to install git

osascript -e 'tell app "Terminal"
    do script "git --version"
end tell' # should prompt install wizard for git if git is not installed
