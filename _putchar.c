#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to stdout
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
 * print_unsigned_ - prints unsigned int
 * @args: arguments list
 * Return: number of characters printed
 */
int print_unsigned_(va_list args)
{
	unsigned int n, count = 0;

	n = va_arg(args, unsigned int);

	if (n / 10)

	count += print_unsigned_(args);

	_putchar(n % 10 + '0');

	count++;

	return (count);
}
