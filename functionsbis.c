#include "main.h"
/**
 * print_char - Print a character
 * @args: va_list containing the character to be printed
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * print_string - Print a string
 * @args: va_list containing the string to be printed
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	int count = 0;

	if (s == NULL)

		s = "(null)";

	while (*s)
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}
/**
 * print_percent - Print a percent character
 * @args: va_list (unused in this function)
 *
 * Return: The number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	return (_putchar('%'));
}
/**
 * print_decimal - Print a decimal number
 * @args: va_list containing the decimal number to be printed
 *
 * Return: The number of characters printed
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	unsigned int n;

	if (num < 0)
	{
		count += _putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}
	count += print_unsigned_int(n);

	return (count);
}
/**
 * print_unsigned_int - Print an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_unsigned_int(unsigned int n)
{
	int count = 0;

	if (n / 10)

		count += print_unsigned_int(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
