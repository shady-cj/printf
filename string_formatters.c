
#include "main.h"
#include <stdlib.h>
/**
 * print_string - a function that prints strings to stdout
 * @args: The arg from the variadic function
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
<<<<<<< HEAD
	char *s = va_arg(args, char *);
	int l;



=======
	char *s = NULL;
	int l;

	s =  va_arg(args, char *);
>>>>>>> ad91b6604698f098a78668f33848f383b639c3de
	l = _putString(s == NULL ? "(null)" : s);
	return (l);
}

/**
 * print_char - Prints the character from the formatter
 * @args: The args fron variadic function
 * Return: int (number of characters printed) - 1
 */
int print_char(va_list args)
{
	char c;
	
	c = (char) va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_per - prints the percent sign
 * @args: The args
 * Return: int
 */
int print_per(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * _putString - It is a function similar to the puts function
 * and also returns the number of characters printed
 * @s: The string to be printed
 * Return: The number of chars to be printed
 */

int _putString(char *s)
{
	int length = 0;
        
	while (*s != '\0')
	{
                _putchar(*s);
        	length++;
		s++;
        }
	return (length);
}
