#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
* struct func_type - struct de function printf
* @t: chararcter
* @f: pointer to function
*/

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list arg);
void print_string(va_list arg);
void print_percent(va_list arg);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_unsigned_(va_list args);
#endif /* _MAIN_H */
