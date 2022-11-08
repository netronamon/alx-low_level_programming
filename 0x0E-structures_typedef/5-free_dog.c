/*
 * file:5-free_dog.c
 * author:amon
 *
 */

#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	if(d == NULL)
return;
	free(d->name);
	free(d->owner);
	free(d);
}
