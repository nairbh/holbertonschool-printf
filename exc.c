#include "main.h"
/**
 * print_exc - Print an exclamation mark
 * @args: va_list (unused)
 *
 * Return: Always return 1
 */
int print_exc(va_list args)
{
	(void)args;
	return (_putchar('%') + _putchar('!'));
}
/**
* print_handle - Print a string to stdout
* @s: The string to be printed
* If @s is NULL, print "(null)" instead.
* Return: The number of characters printed
*/
int print_handle(const char *s)
{
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
 * print_binary - Print a binary number
 * @args: va_list containing the binary number to be printed
 *
 * Return: The number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    int count = 0;

    count = print_binary_helper(n, count);

    return (count);
}

/**
 * print_binary_helper - Recursive helper function for print_binary
 * @n: The unsigned integer to be printed in binary
 * @count: The number of characters printed so far
 *
 * Return: The total number of characters printed
 */
int print_binary_helper(unsigned int n, int count)
{
    if (n / 2)
        count = print_binary_helper(n / 2, count);

    count += _putchar((n % 2) + '0');

    return (count);
}
