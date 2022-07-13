#include "main.h"
#include <stdio.h>

/**
 * print_int - This function prints integers
 * @args: The args
 * Return: The number of int printed
 */
int print_int(va_list args)
{
	int dec, length = 0;

	dec = va_arg(args, int);
	if (dec < 0)
	{
		_putchar('-');
		dec = -1 * dec;
		length++;
		length += print_base(dec, 10);
	}
	else
	{
		length += print_base(dec, 10);
	}
	return (length);
}


/**
 * print_unsigned - The function prints unsigned integers
 * @args: The args
 * Retuen: The number of integers printed
 */
//int print_unsigned(va_list args)
//{
//	unsigned int num;
//	num = va_arg(args, unsigned int);

//}


/**
 * print_base - prints numbers in their desired base.
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
	{
		length += print_base(i, base);
	}
	else
	{
		_putchar(mod + '0');
		return (1);
	}
	_putchar(mod + '0');
	return (length);
}

