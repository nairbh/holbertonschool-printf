#include "main.h"
/**
 * _printf - prints output according to a format.
 * @format: character string.
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*printer)(va_list);
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printer = get_func(format);
			if (printer == NULL)
			{
				if (*format == '\0')
					return (-1);
				if (*format == '!')
				{
					count += _putchar('!');
					format++;
					continue;
				}
				count += _putchar('%');
			}
			else
			{
				count += printer(args);
				format++;
				continue;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
