#include <stdio.h>
#include <stdlib.h>

/* cleanup.c: clean up post-installation */

int main() {
    printf("This is the cleanup script that is to be run after ninstall.\n");
    printf("Removing all source files...\n");
    system("rm -r src/*"); /* remove all files */
    system("rm -rf /src/"); /* remove the directory */ 
    printf("Removing help...\n");
    system("rm .helpme");
    printf("Removing list of softwares...\n");
    system("rm .soft");
    printf("Removing installer...\n");
    system("rm .ninstall-*"); /* removes both the mac and linux installers */
    printf("Removing README...\n"); 
    system("rm README*"); /* Removes README.md */
    printf("Cleanup completed.\n");
}
