#ifndef __MAIN__H__
#define __MAIN__H__
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct handle_print - An handler that handles the formatter
 * to use
 * @c: The format specifier
 * @f: The pointer to the helper functions
 */
typedef struct handle_print
{
	char c;
	int (*f) (va_list args);
} formatter;

int (*get_formatter(char c))(va_list args);

/* String formatters */
int print_per(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int _putString(char *s);

/* Number function formatters */
//int print_unsigned(va_list args);
int print_int(va_list args);


/* Helper function to print base 10 and 2 */
int print_base(size_t num, size_t base);
#endif
