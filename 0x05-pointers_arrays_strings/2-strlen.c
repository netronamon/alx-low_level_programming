/*
 * File: 2-strlen.c
 * Auth: amon
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int i = 0;
while(*s != '\0')
{
i++;
s++;
}
return (i);
}
