/*
 * file:1-init_dog.c
 * author:amon
 *
 */
#include <stdio.h>
#include "dog.h"
/*
 * Desc:intializing a structure
 * @d: struct pointer
 * @name:name pointer
 * @age:float for age
 * @owner:string to owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = age;
	d->owner = *owner;

}
