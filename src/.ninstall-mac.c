#include <stdio.h>
#include <stdlib.h>

int main() {
    system("sh src/.brew-install.sh"); /* Install Brew */
    system("sh src/.git-install-mac.sh"); /* Install Git for Mac */
    system("sh src/.python-install-mac.sh"); /* Install Python 3 for Mac (Python 2 comes with it by default) */
    system("sh src/.vim-install-mac.sh"); /* Install VIM and GVIM for mac */
    system("sh src/.jupyter-install-mac.sh"); /* Install Jupyter Notebook for mac */
}
