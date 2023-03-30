#include "main.h"

/**
 * get_func - selects the correct function to use based on the format specifier
 * @format: format specifier
 *
 * Return: pointer to the correct function, or NULL
 */
int (*get_func(const char *format))(va_list)
{
	int i;

	print_f funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"p", print_address},
		{"X", print_hex_upper},
		{"!", print_exclamation},
		{"K", print_K},
		{NULL, NULL}
	};

	for (i = 0; funcs[i].p != NULL; i++)
	{
		if (*funcs[i].p == *format)
			return (funcs[i].f);
	}
	return (NULL);
}
