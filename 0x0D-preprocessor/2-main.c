#include <stdio.h>
/*
 * file:2-main.c
 * author:amon
 * Desc: program that prints the name of the file it is being compiled from
 *
 */

/**
 * main - Prints the name of the file of the program
 *  was compiled from, followed by a new line.
 * Return: Always 0.
 */
int main (void)
{
	printf("%s\n", __FILE__);
	return(0);
}
