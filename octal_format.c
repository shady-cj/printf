#include "main.h"
/**
 * print_octal - This prints the passed int into base 8
 * @args: The pointer to the args list.
 * Return: int;
 */
int print_octal(va_list *args)
{
	unsigned int num;
	int length;

	num = (unsigned int) va_arg(*args, int);
	length = print_base(num, 8);
	return (length);

}
