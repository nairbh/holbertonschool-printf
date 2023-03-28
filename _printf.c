#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)

{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				print_char(args);
			else if (format[i] == 's')
				print_string(args);
			else if (format[i] == '%')
				print_percent(args);
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_integer(args);
			else if (format[i] == 'u')
				count += print_unsigned_(args);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
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
