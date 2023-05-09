# C- File I/O

### Introduction
A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices.
A *file descriptor* (*FD*, less frequently **fildes**) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

## Learning Objectives
### General
 - Look for the right source of information online
 - How to create, open, close, read and write files
 - What are file descriptors
 - What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
 - How to use the I/O system calls `open`, `close`, `read` and `write`
 - What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
 - What are file permissions, and how to set them when creating a file with the `open` system call
 - What is a system call
 - What is the difference between a function and a system call

## Requirements
### General
 - Allowed editors: `vi`, `vim`, `emacs`
 - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
 - All your files should end with a new line
 - Your code should use the `Betty` style. It will be checked using [betty-style.pl]{https://github.com/holbertonschool/Betty/blob/master/betty-style.pl} and [betty-doc.pl]{https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl}
 - The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

## Header file
The header file `main.h` contains all the prototypes for the functions in the `.c` files. The header file is include guarded.


## Tasks
### Tasks 0
Write a function that reads a text file and prints it to the `POSIX` standard output.
 - File: `0-read_textfile.c`

### Tasks 1
Create a function that creates a file.
 - File: `1-create_file.c`

### Tasks 2
Write a function that appends text at the end of a file.
 - File: `2-append_text_to_file.c`

### Task 3
Write a program that copies the content of a file to another file.
 - File: `3-cp.c`

### Task 4
Write a program that displays the information contained in the `ELF` header at the start of an `ELF` file.
 - File: `100-elf_header.c`


## Reference
 - [Wikipedia]{https://en.wikipedia.org/wiki/File_descriptor#Operations_that_modify_process_state}
 - [C-File I/O]{https://www.tutorialspoint.com/cprogramming/c_file_io.htm}
