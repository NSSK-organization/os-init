# Script to install brew

osascript -e 'tell app "Terminal"
    do script "sh /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)""
end tell'
