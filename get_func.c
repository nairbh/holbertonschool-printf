#include "main.h"

/**
 * get_func - Structure
 * @a: character.
 *
 * Return: 0
 */

int (*get_func(const char a))(va_list)
{
	print_f printf[] = {
		{ 'c', print_char },
		{ 's', print_string },
		{ 'd', print_decimal},
		{ 'i', print_integer},
		{ '\0', NULL},
	};

	int h;

	for (h = 0; printf[h].p != '\0'; h++)
	{
		if (printf[h].p == a)
		{
			return (printf[h].f);
		}
	}

	return (0);
}
