#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

// Structure pour stocker les informations sur les conversions possibles
typedef struct types {
    char *p;
    int (*f)(va_list);
} print_f;

int (*get_op_func(const char *format))(va_list);
char _putchar(char c);
int printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);

#endif /* _MAIN_H */
