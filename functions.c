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
