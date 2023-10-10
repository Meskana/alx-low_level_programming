#include "dog.h"
#include<stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer valiable
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s\n", (d->name) ? d->name : "(nil)");
		printf("%f\n", (d->age) ? d->age : 0);
		printf("%s\n", (d->owner) ? d->owner : "(nil)");
	}
}
