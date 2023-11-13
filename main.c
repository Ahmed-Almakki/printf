#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    char c = 'u';
    char s[] = "ahmed";
    int h;

    len = _printf("Let's try to _printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    h =_printf("_welcome %s its pleasure to meet %c\n", s, c);
    printf("welcome %s its pleasure to meet %c\n", s, c);
    printf("len: %d, h: %d", len, h);
    return (0);
}
