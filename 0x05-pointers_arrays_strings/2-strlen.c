/**
 * file:2-strlen.c
 * author:amon
 *
 */ 
#include"main.h"
/*
 *_strlen - returns length of a string
 *@s:the pointer to string
 *
 * Return:returns length of string
 */
int _strlen(char *s)
{
int i=0;
while(*s!='\0')
{
i++;
s++;
}
return(i);
}
