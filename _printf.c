#include "main.h"
#include <stdarg.h>
/**
 * _printf - function prinft
 *  @format: pointer arugument
 * Return: print_string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int count = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1])
			{
				f = get_op_func(&format[i + 1]);
				if (f == NULL)
				{
					count += _putchar(format[i]);
					count += _putchar(format[i + 1]);
				}
				else
				{
					count += f(args);
				}
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
