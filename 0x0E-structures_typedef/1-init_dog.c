#include "dog.h"
#include<stdio.h>

/**
 * init_dog - initialize a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: struct dog datatype
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
