#include "main.h"

/**
 * print_char - print a char
 * @list: arguments passed to the function
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * print_string - print a string
 * @list: arguments passed to the function
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i])
		_putchar(s[i++]);

	return (i);
}

/**
 * print_percent - print a percent sign
 * @list: arguments passed to the function
 *
 * Return: number of characters printed
 */
int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

/**
 *_print_number - print number
 * @list: argument number
 * Return: 1
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
