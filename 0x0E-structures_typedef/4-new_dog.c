/** file:4-new_dog.c
 * author:amon
 *
 */
#include<stdio.h>
#include"dog.h"
/**
 * new_dog - functin to create a anew dog
 * @name:gets the name
 * @age:gets the age
 * @owner:gets the owner
 * reutrn:a pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{      
       	dog_t *ptr;
	char *name_1 = name;
	char *owner_1 = owner;
	dog_t newdog;
	ptr = &newdog;
	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;
	if (newdog == NULL)
 return(NULL);
	else
		return(ptr);
}
