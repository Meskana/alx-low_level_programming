#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *sorc);

/**
 * _strlen - find length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * _strcpy - copy a string
 * @dest: destination string
 * @sorc: sourse string
 * Return: string pointer
 */

char *_strcpy(char *dest, char *sorc)
{
	int i;

	for (i = 0; sorc[i] != '\0'; i++)
		dest[i] = sorc[i];
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: return dog_t datatype
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		Dog = malloc(sizeof(dog_t));

		if (Dog == NULL)
			return (NULL);
		Dog->name = malloc(sizeof(char) * name_len);
		if (Dog->name == NULL)
		{
			free(Dog);
			return (NULL);
		}
		Dog->owner = malloc(sizeof(char) * owner_len);
		if (Dog->owner == NULL)
		{
			free(Dog->name);
			free(Dog);
			return (NULL);
		}
		Dog->name = _strcpy(Dog->name, name);
		Dog->owner = _strcpy(Dog->owner, owner);
		Dog->age = age;
	}
	return (Dog);
}
