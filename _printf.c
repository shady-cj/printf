#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

unsigned int _strlen(const char *str);
int _print(const char *format, va_list args);

/**
 * _printf - A function that mimics the traditional c printf
 * @format: The string to be printed
 * Return: The length of the characters printed in int
 */

int _printf(const char *format, ...)
{
	int length;
	va_list args;

	va_start(args, format);
	length = _print(format, args);
	va_end(args);
	return (length);
}

/**
 * _print - The helper function that implements
 * the print and formatting
 * @format: The string to be printed
 * @args: These are additional args which may be 0 or more and it's
 * of type va_list
 * Return: it returns an int... the number of characters
 * printed
 */
int _print(const char *format, va_list arg)
{
	char *s;
	size_t i;
	int length;
	unsigned int idx, len = _strlen(format);

	length = 0;
	idx = 0;
	while (idx < len)
	{
		while (format[idx] != '%' && idx < len)
		{
			_putchar(format[idx]);
			length++;
			idx++;
		}
		idx++;

		switch (format[idx])
		{
			case 's':
				s = va_arg(arg, char *);
				while (*s != '\0')
				{
					_putchar(*s++);
					length++;
				}
				break;
			case 'c':
				i = va_arg(arg, int);
				_putchar(i);
				length++;
				break;
		}
		idx++;
	}
	return (length);
}

/**
 *
 * _strcpy - A function that finds the length of a string
 * @str: The string
 * Return: The length
 */
unsigned int _strlen(const char *str)
{
	unsigned long int i, length;

	i = 0;
	length = 0;
	while (str[i++] != '\0')
		length++;
	return (length);

}