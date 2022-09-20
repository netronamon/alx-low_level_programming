/*
 * File: 3-puts.c
 * Author: amon
 */

#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
while (*str!='\0')
{
printf("%c",*str);
str++;
}
printf("\n");
}
