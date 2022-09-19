/*
 * File: 2-strlen.c
 * Author:amon
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(const char *str)
{
	 length = 0;

	while (*str++)
		length++;

	return (length);
}
