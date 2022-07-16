#ifndef __MAIN__H__
#define __MAIN__H__
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct handle_print - An handler that handles the formatter
 * to use
 * @c: The format specifier
 * @f: The pointer to the helper functions
 */

typedef struct handle_print
{
	char c;
	int (*f)(va_list *args);
} formatter;

/* Utils */
int _putchar(char c);
unsigned int _strlen(const char *str);
int _printf(const char *format, ...);
int (*get_formatter(char c))(va_list *args);
/* String formatters */
int print_per(va_list *args);
int print_string(va_list *args);
int print_char(va_list *args);


/* Number function formatters */
int print_int(va_list *args);
int print_bin(va_list *args);
int print_unsigned_int(va_list *args);
int print_x(va_list *args);
int print_X(va_list *args);
int print_octal(va_list *args);


/* Helper function to print base 10 and 2 */
int print_base(size_t num, size_t base);

/* Printing strings */
int _putString(char *s);

/* Helper function to print hex */

/**
 * struct hex - A structure that maps the int values to their hex values
 * @num: The number
 * @c: The equivalent character in hex
 * @lower_c: The lowercase equivalent
 */
struct hex
{
	size_t num;
	char c;
	char lower_c;
};

int print_hex(size_t num, char type);

#endif
