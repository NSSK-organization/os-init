# Operating System Initialization

Here are the important things I like to do on a brand new computer.

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
