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

typedef struct types
{
	char p;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_unsigned_(va_list args);
int (*get_func(const char a))(va_list);

#endif /* _MAIN_H */
