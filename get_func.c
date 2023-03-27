#include "main.h"

/**
 * get_func - Entry point
 * @a: character
 *
 * Return: 0
 */

int (*get_func(const char *a))(va_list)
{
	print_f printf[] = {
		{'c', print_char},
		{'s', print_string},	
		{'%', print_percent},
	};

	int a;

	for (a = 0; printf[a].p != '\0'; a++)
	{
		if (printf[a].p == a)
		{
			return (printf[a].func);
		}
	}
	return (0);
}
