## 0x00. C - HELLO, WORLD

### Learning Objectives
At the end of this project, you are expected to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg)

## General
 - Why C programming is awesome
 - Who invented C
 - Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
 - What happens when you type `gcc main.c`
 - What is an entry point
 - What is `main`
 - How to print text using `printf`, `puts` and `putchar`
 - How to get the size of a specific type using the unary operator `sizeof`
 - How to compile using `gcc`
 - What is the default program name when compiling with `gcc`
 - What is the official C coding style and how to check your code with `betty-style`
 - How to find the right header to include in your source code when using a standard library function
 - How does the `main` function influence the return value of the program

### Requirements

### C
 - Allowed editors: `vi`, `vim`, `emacs`
 - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89
 - All your files should end with a new line
 - There should be no errors and no warnings during compilation
 - You are not allowed to use `system`
 - Your code should use the `Betty` style.

### Shell Scripts
 - Allowed editors: `vi`, `vim`, `emacs`
 - All your scripts will be tested on Ubuntu 20.02 LTS
 - All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
 - All your files should end with a new line
 - The first line of all your files should be exactly `#!/bin/bash`

## More Info

### Betty linter
* To run the Betty linter just with command `betty <filename>`

 - Go to the `Betty` repository
 - Clone the `repo` to your local machine
 - `cd` into the Betty directory
 - install the linter with `sudo ./install.sh`
 - `emacs` or `vi` a new file called `betty`, and copy the script below

 ```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

 ```

 - Once saved, exit file and change permissions to apply to all users with `chmod a + x betty`
 - Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH`with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the Betty linter!


## Tasks
 ```
Task 0 - Preprocessor
Write a script that runs a C file throught the preprocessor and save the result into another file.

Task 1 - Compiler
Write a script that compiles a C file but does not link.

Task 2 - Assembler
Write a script that generates the assemble code of a C code and save it in an output file.

Task 3 - Name
Write a script that compiles a C file and creates an executable named `cisfun`.

Task 4 - Hello, puts
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

Task 5 - Hello, printf
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

Task 6 - Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

Task 7 - Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

Task 8 - UNIX is basically a simple operating sytem, but you have to be genius to understand the simplicity.

```


## Reference
 - [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl)
 - [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl)
