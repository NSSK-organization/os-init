# Debugging your install script

## Creating a GitHub Issue

If something goes wrong and the below article does not help:

1. Navigate to [the repository](github.com/infection-tag/os-init)
2. Go to the "Issues" tab
3. Search the Issues database
4. If you can't find a similar issue, create a new issue
5. Wait for a response

## Re-compiling the code

If your code does not work, install gcc on your computer, and run

```
gcc .helpme.c -o ./.helpme
gcc .soft.c -o ./.soft
gcc .ninstall.c -o ./.ninstall
```
Then refresh your terminal and try again.
