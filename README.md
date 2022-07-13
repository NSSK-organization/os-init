# Operating System Initialization

Here are the important things I like to do on a brand new computer. Just follow the quickstart instructions, run a command, sit back, and relax as we do all the work for you!  

For help debugging, go to [src/README.md](https://github.com/NSSK-organization/os-init/tree/main/src#readme)

## Quickstart

For more detailed information, read the section titled "Getting Started".

Before you run, you will need:
* Linux or MacOS on your computer (Currently, this app only works with MacOS)

### Steps

1. Open your terminal. From there, copy the following code in:
```
cd ~
rm .*shrc
rm .vimrc
rm .profile
```
>Note: You may get a notice saying that "this file does not exist". That's fine -- the above code is there to remove the files, so if they don't exist, just continue.
2. Download this repository as a ZIP file, and extract it to your home (~) directory.
>Note: You must have all files extracted to your home directory or this will not work!
3. To get started, type `helpme` and follow the instructions from there.

## Getting started

### Setup

To set up, open your terminal. By default, it should open at your home directory. You know you are in your home directory when there is a ~ anywhere on your line. If there isn't, type

```
cd ~
```

Then type

```
rm .zshrc
```
if you are on MacOS, and 

```
rm .bashrc
```
if on Linux.

>Note: If you recieve an error which looks something like this: `no such file or directory: .zshrc` (with .zshrc swapped out for .bashrc on Linux)

Also, type 

```
rm .vimrc
```

### Running the scripts

To get started, install the repository as a .zip file and extract it at your home directory (~). To get started with a human, type

```
helpme
```
and follow the instructions from there.

>Note: this **will not** work if you do not extract to your home directory!

*And yes, you **can** type `balls`.*

### Cleaning up

When you are done, go back into your home folder (~) if you aren't already there, and type 

```
ncleanup
```

## How the files are structured

The files are structured like a shell, i. e. starting at ~ and going down from there.
