#include <stdio.h>
/*
 * file:2-main.c
 * author:amon
 * Desc: program that prints the name of the file it is being compiled from
 *
 */
int main (void )
{
	printf("%s\n", __FILE__);
	return(0);
}
