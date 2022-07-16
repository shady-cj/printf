#include "main.h"

/**
 * _printf - A function that mimics the traditional c printf
 * @format: The string to be printed
 * Return: The length of the characters printed in int
 */

int _printf(const char *format, ...)
{
	int length;
	va_list args;
	int (*f)(va_list *);
	unsigned int idx, len = _strlen(format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	length = 0;
	idx = 0;
	va_start(args, format);
	while (idx < len)
	{
		while (format[idx] != '%' && idx < len)
		{
			_putchar(format[idx]);
			length++;
			idx++;
		}
		idx++;
		if (idx >= len)
			break;
		f = get_formatter(format[idx]);
		if (f != NULL)
		{
			length += f(&args);
		}
		idx++;
	}
	va_end(args);
	return (length);
}
