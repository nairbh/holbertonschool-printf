<h1> C-Printf</h1></p>

<h3>Description</h3>

This team project is part of the first year curriculum of Holberton School. _printf replicates the C standard library printf() function.

What you should learn from this project:
* How to use git in a team setting
* Applying variadic functions to a big project
* The complexities of printf
* Managing a lot of files and finding a good workflow

<h3>Compilation</h3>

```$ gcc -Wall -Werror -Wextra -pedantic *.c```

<h3>Prototype</h3>

```int _printf(const char *format, ...)```

<h3>Usage</h3>

* Prints a string to the standard output, according to a given format
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way : _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters


<h3>Formats</h3>

| Specifiers  	| Description |
| ----------- | -----------|
|%c |	Print single character  |
|%s |	Print string of characters  |
|%  |	Print percent |
|%d |	Print decimal numbers |
|%i |	Print integers  |

<h3>Projet files</h3>

 File  |	Description |
| ----------- | ----------- |
| main.h  |	**Header file**<br>Include all  function prototypes<br> Include structure of specifiers |
| _printf.c |	**Project function: _printf** <br> Start the variadic list.<br> Iterates string  format  of entry and check for a module symbol (%). If  the symbol is found then check if the next char match with one of the valid specifiers in the structure using the auxiliar function to compare ( get_func), in that case the respective function of these format is called.<br> For the characters that doesn't match any of the formats the function ignores the module symbole and print it  as a string.<br> In case that  the module symbole is not found, print the each character normally.|
| functionsbis.c  |	**Auxiliar functions**<br> print_char: print character using list variable.<br> print_string: pint strings, if string is null it pirnts (null)<br> print_decimal: print decimal numbers base.|

<h3>Tasks</h3>

These are all the tasks of this project, the ones that are completed link to the corresponding files.

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
* Write a function that produces output according to a format.
    * c : converts input into a character
    * s : converts input into a string

1. Education is when you read the fine print. Experience is what you get if you don't
* Handle the following conversion specifiers:
    * d : converts input into a base 10 integer
    * i : converts input into an integer

2. Just because it's in print doesn't mean it's the gospel
* Create a man page for your function

<h3>Authors</h3>

Houcine Nair Benrokia - [@nairbh](https://github.com/nairbh)<br>

Nicolas De Sousa - [@Nico-dsa](https://github.com/Nico-dsa)<br>  
