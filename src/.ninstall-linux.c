/* Note: We may run into some issues as some installations may not work on Debian-based systems. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("sh src/.brew-install.sh"); /* Install brew */
    system("sh src/.git-install-linux.sh"); /* Install git */
    system("sh src/.python-install-linux.sh"); /* Install python */
    /* TODO: Add scripts for installing Jupyter notebook and Vim */
}
