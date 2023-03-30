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
