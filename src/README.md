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

## Permission Issues

Sometimes you may get a permission error. If that is the case, go into your terminal and type 

```
sudo su
```
and run the program again.

## Installation issues

I did not create any of the softwares that are being installed. If you encounter an error, I would suggest going to the troubleshooting guide of that individual software. If you do not know which software caused the error, copy and paste the error into google.
