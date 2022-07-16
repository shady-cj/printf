#include "main.h"
/**
 * print_base - prints numbers in their desired base (2, 8, 10)
 * @num: The number to be printed
 * @base: The base to be printed
 * Return: int
 */
int print_base(size_t num, size_t base)
{
	int length, i, mod;

	i = num / base;
	mod = num % base;
	length = 1;

	if (i > 0)
		length += print_base(i, base);

	_putchar(mod + '0');
	return (length);
}

/**
 * print_hex - This helper function prints the hex equivalent
 * @num: The number to be printed
 * @type: The type to be printed
 * Return: int
 */
int print_hex(size_t num, char type)
{
	size_t i, mod, idx;
	int length;
	struct hex format[] = {
		{10, 'A', 'a'},
		{11, 'B', 'b'},
		{12, 'C', 'c'},
		{13, 'D', 'd'},
		{14, 'E', 'e'},
		{15, 'F', 'f'}
	};

	i = num / 16;
	mod = num % 16;
	length = 1;
	if (i > 0)
	{
		length += print_hex(i, type);
	}
	if (mod < 10)
	{
		_putchar(mod + '0');
	}
	else
	{
		for (idx = 0; idx < 6; idx++)
		{
			if (format[idx].num == mod)
			{
				_putchar(type == 'X' ?
					format[idx].c :
					format[idx].lower_c
					);
			}
		}
	}
	return (length);
}
