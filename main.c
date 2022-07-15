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
    len = _printf("Let's try to printf a simple sentence, %s %c \n", "John", 'A');
    len2 = printf("Let's try to printf a simple sentence. %i %c \n", 5655, 'A');
    printf("%d %d\n", len, len2);
}

