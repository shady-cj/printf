#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - A function that finds the length of a string
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
