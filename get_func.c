#include "main.h"

/**
 * print_char - prints a character
 * @arg: argument to print
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
}

/**
 * print_string - prints a string
 * @arg: argument to print
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
/**
 * print_percent - prints a percent sign
 * @arg: argument (unused)
 */

void print_percent(__attribute__((unused)) va_list arg)
{
	_putchar('%');
}

/**
 * print_decimal - prints decimal
 * @args: arguments list
 * Return: number of characters printed
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int), count = 0;
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n / 10)
		count += print_decimal(args);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
/**
 * print_integer - prints integer
 * @args: arguments list
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	return (print_decimal(args));
}
