/**file:2-print_dog.c
 *author:amon
 *
 */
#include<stdio.h>
#include"dog.h"
/**print_dog - prints the contenst of the structure
 * @d :pointer to structure
 * return: returns 0
 * 
 */
void print_dog(struct dog *d)
 {
 if (d == '\0')
 return(0);
 if( d->name == '\0')
 printf("Name:(nil)/n");
 else
 printf("Name:%s\n", d->name);
 if( d->age == '\0')
 printf("age:(nil)");
 else
 printf("age = %f \n", d->age);
 if(d->owner == '\0')
 printf("owner=(nil)");
 else
 printf("owner:%s\n", d->owner);
 }
