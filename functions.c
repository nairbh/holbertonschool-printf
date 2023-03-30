#include "main.h"

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
