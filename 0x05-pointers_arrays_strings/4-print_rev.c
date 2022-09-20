/*
 * File: 4-print_rev.c
 * Author:amon
 */
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int i=0;
int counter;
while (*s != '\0')
{
s++;
i++;
}
s++;
for (counter=i-1;counter >= 0;counter--)
{
printf("%c", *s);
s-=1;
}
printf("\n");
}
