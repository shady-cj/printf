#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    len = _printf("Let's try to printf a simple sentence, %s %c %i %d %u\n", "John", 'A', 4626677, 729, 4098283);
    len2 = printf("Let's try to printf a simple sentence. %i %c %X\n", 5655, 'A', 774788429);
    printf("%d %d\n", len, len2);
    _printf("%X\n", 774788429);
    printf("octal %o \n", 8000);
    _printf("%o testi\n", 8000);
}

