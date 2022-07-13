#include "main.h"
#include <stdio.h>
/**
 * get_formatter - The function maps the format specifier
 * to their appropriate helper functions
 * @c: The format specifiers to be used
 * Return: A pointer to the mapped helper function
 */
int (*get_formatter(char c))(va_list args)
{
	int i, arr_len = 6;
	formatter arr[] = {
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'c', print_char},
		{'%', print_per},
		{' ', NULL}
	};

	for (i = 0; i < arr_len; i++)
	{
		if (c == arr[i].c)
		{
			return (arr[i].f);
		}
	}
	return (arr[i].f);
}
