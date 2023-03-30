#include "main.h"

/**
 * print_address - Print an address in hexadecimal
 * @args: va_list containing the address to be printed
 *
 * Return: The number of characters printed
 */
/**
 * print_address - Print an address in hexadecimal
 * @args: va_list containing the address to be printed
 *
 * Return: The number of characters printed
 */
int print_address(va_list args)
{
	unsigned long n = (unsigned long)va_arg(args, void *);
	int count = 0;

	if (n == 0)
	{
	count += print_handle("(nil)");
	return (count);
	}

	count += _putchar('0');
	count += _putchar('x');

	count += print_hex_lower_helper(n);
	return (count);
}
/**
 * print_unsigned - Print an unsigned integer
 * @args: va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	int count = 0;

	count += print_unsigned_int(n);

	return (count);
}
/**
 * print_hex_upper - Print a hexadecimal number in uppercase
 * @args: va_list containing the hexadecimal number to be printed
 *
 * Return: The number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	count += print_hex_upper_helper(n);

	return (count);
}
/**
 * print_hex_upper_helper - Recursive helper function for print_hex_lower
 * @n: The unsigned integer to be printed in hexadecimal
 *
 * Return: The number of characters printed
 */
int print_hex_upper_helper(unsigned int n)
{
	int count = 0;
	int digit;

	if (n / 16)
		count += print_hex_upper_helper(n / 16);

	digit = n % 16;
	if (digit < 10)
		count += _putchar(digit + '0');
	else
		count += _putchar(digit - 10 + 'A');

	return (count);
}
/**
 * print_K - Print the letter K
 * @args: va_list (unused)
 *
 * Return: Always return 1
 */
int print_K(va_list args)
{
	(void)args;
	return (_putchar('%') + _putchar('K'));
}
