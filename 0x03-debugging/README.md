# 0x03. C - Debugging
Debugging is the process of identifying and fixing errors or defects in a computer program. It is an essential part of software development and involves locating and resolving issues that prevent the program from functioning correctly or producing the expected results.

## Learning Objectives

### General
 - What is debugging
 - What are some methods of debugginh manually
 - How to read the error messages

## Requirements
### General

 - Allowed editors: `vi`, `vim`, `emacs`
 - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
 - All your files should end with a new line
 - Your code should use the `Betty` style.

### Tasks 

**Tak 0 - Multiple mains**
In most projects, we often give you only one main file to test with. For example, this main file is a test for a `postitive_or_negative()` function similar to the one you worked with in [an earlier C project]():

```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from [0x01. C - Variables, if, else, while - Task #0]() to compile with this main file to test locally.


**Task 1 - Like, comment, subscribe**
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

**Task 2 -  0 > 972?**
This program prints the largest of three integers.
Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.


**Task 3 - Leap year**
This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.


## Reference

### Resources
 - [Debugging](https://en.wikipedia.org/wiki/Debugging)
 - [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)



**Author - Carrie Ybay**
