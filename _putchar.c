#include "main.h"
/**
* _putchar - print character
* @c : character
* Return: write
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_octal - Print an octal number
 * @args: va_list containing the octal number to be printed
 *
 * Return: The number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	count += print_octal_helper(n);

	return (count);
}

/**
 * print_octal_helper - Recursive helper function for print_octal
 * @n: The unsigned integer to be printed in octal
 *
 * Return: The number of characters printed
 */
int print_octal_helper(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_helper(n / 8);

	count += _putchar((n % 8) + '0');

	return (count);
}

/**
 * print_hex_lower - Print a hexadecimal number in lowercase
 * @args: va_list containing the hexadecimal number to be printed
 *
 * Return: The number of characters printed
 */
int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	count += print_hex_lower_helper(n);

	return (count);
}

/**
 * print_hex_lower_helper - Recursive helper function for print_hex_lower
 * @n: The unsigned integer to be printed in hexadecimal
 *
 * Return: The number of characters printed
 */
int print_hex_lower_helper(unsigned int n)
{
	int count = 0;
	int digit;

	if (n / 16)
		count += print_hex_lower_helper(n / 16);

	digit = n % 16;
	if (digit < 10)
		count += _putchar(digit + '0');
	else
		count += _putchar(digit - 10 + 'a');

	return (count);
}

