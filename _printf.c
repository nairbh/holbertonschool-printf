#include "main.h"

/**
 * _printf - printf function.
 * @format: variable
 * 
 * Return: values printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, char_num = 0;

	if (!format)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				char_num++;
				i++;
			}
			else if (get_func(format[i + 1]) != NULL)
			{
				char_num += (get_func(format[i + 1]))(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				char_num++;
			}
		}
		else
		{
			_putchar(format[i]);
			char_num++;
		}
	}
	va_end(list);
	return (char_num);
}
