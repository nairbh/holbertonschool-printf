#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_c - Entry function. Print character
 * @list: variable va_list
 *
 * Return: 1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}


void print_percent(int *count)
{
        write(1, "%", 1);

                (*count)++;
}


void print_string(char *str, ...)
{
        va_list args;

        va_start(args, str);

        int *count = va_arg(args, int *);

        while (*str != '\0')
        {
                write(1, str, 1);
                str++;
                (*count)++;
        }

        va_end(args);
}
