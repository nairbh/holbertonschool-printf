#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdstring>

/**
 * strut types - Structure for printf
 * @p: pointers to characteres
 * @func: function pointer to print fucntions
 */

typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
