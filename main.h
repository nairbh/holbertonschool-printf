#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct types
{
	char *p;
	int (*f)(va_list);
} print_f;

int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int _putchar(char c);
int print_unsigned_int(unsigned int n);
int print_octal(va_list args);
int print_octal_helper(unsigned int n);
int print_hex_lower(va_list args);
int print_hex_lower_helper(unsigned long n);
int print_address(va_list args);
int print_unsigned(va_list args);
int print_hex_upper(va_list args);
int print_hex_upper_helper(unsigned int n);
int print_K(va_list args);
int print_exc(va_list args);
int print_handle(const char *s);
int print_binary(va_list args);
int print_binary_helper(unsigned int n, int count);
#endif /* MAIN_H */
