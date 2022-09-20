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
while (*s != '\0')
{
i++;
s++;
}
s-=i;
char str[i];
while (*s != '\0')
{
str[i] = *s;
s++;
i--;
}
for(i=0;i<strlen(str);i++)
{
printf("%c",str[i]);
}
}
