#include <stdio.h>
#include <stdlib.h>

int main() {
    system("sh .brew-install.sh"); /* Install Brew */
    system("sh .git-install-mac.sh"); /* Install Git for Mac */
    system("sh .python-install-mac.sh"); /* Install Python 3 for Mac (Python 2 comes with it by default) */
    system("sh .vim-install-mac.sh"); /* Install VIM and GVIM for mac */
    /* TODO: Add installations for Jupyter Notebook and GVIM */
}
