# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
__conda_setup="$('/Users/nishantkompella/opt/anaconda3/bin/conda' 'shell.zsh' 'hook' 2> /dev/null)"
if [ $? -eq 0 ]; then
    eval "$__conda_setup"
else
    if [ -f "/Users/nishantkompella/opt/anaconda3/etc/profile.d/conda.sh" ]; then
        . "/Users/nishantkompella/opt/anaconda3/etc/profile.d/conda.sh"
    else
        export PATH="/Users/nishantkompella/opt/anaconda3/bin:$PATH"
    fi
fi
unset __conda_setup
# <<< conda initialize <<<


export GEM_PATH="$HOME/.gem/ruby/2.6.0/bin"
export PATH="$GEM_PATH:$PATH"

source /usr/local/opt/chruby/share/chruby/chruby.sh
source /usr/local/opt/chruby/share/chruby/chruby.sh
source /usr/local/opt/chruby/share/chruby/auto.sh
chruby ruby-3.1.1

alias antlr4='java -Xmx500M -cp "/usr/local/lib/antlr-4.10.1-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
alias grun='java -Xmx500M -cp "/usr/local/lib/antlr-4.10.1-complete.jar:$CLASSPATH" org.antlr.v4.gui.TestRig'

# personal aliases, made by me so I don't get confused
alias bounce='touch'
alias balls='~/.balls'
