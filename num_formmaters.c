#include "main.h"
#include <stdio.h>

/**
 * print_int - This function prints integers
 * @args: The args
 * Return: The number of int printed
 */
int print_int(va_list *args)
{
	int dec, length = 0;

	dec = (int) va_arg(*args, int);
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
int print_unsigned_int(va_list *args)
{
	unsigned int num;
	int length;

	num = (unsigned int) va_arg(*args, int);
	length = print_base(num, 10);
	return (length);
}

/**
 * print_bin - The helper function prints a binary
 * @args: a pointer to the args
 * Return: The number of printed characters
 */
int print_bin(va_list *args)
{
	unsigned int i;
	int length = 0;

	i = (unsigned int) va_arg(*args, int);
	length += print_base(i, 2);
	return (length);
}

/**
 * print_x - Handles printing of hexadecimal int of lowercase
 * @args: a pointer to the args of type va_list
 * Return: The number of printer chars
 */
int print_x(va_list *args)
{
	unsigned int i;
	int length;

	i = (unsigned int) va_arg(*args, int);
	length = print_hex(i, 'x');
	return (length);
}

/**
 * print_X - Handles printing of hexadecimal int of uppercase
 * @args: a pointer to the args of type va_list
 * Return: The number of printer chars
 */
int print_X(va_list *args)
{
	unsigned int i;
	int length;

	i = (unsigned int) va_arg(*args, int);
	length = print_hex(i, 'X');
	return (length);
}
