#include "main.h"

/**
 *get_op_func - select the function
 *@format : format de argument printf
 *Return: NULL if format is NUll
 */
int (*get_op_func(const char *format))(va_list)
{
	int h;
	print_f printf[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{NULL, NULL}};

	for (h = 0; printf[h].p; h++)
	{
		if (*format == *(printf[h].p))
		{
			return (printf[h].f);
		}
	}

	return (NULL);
}
