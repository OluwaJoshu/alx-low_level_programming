#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets len of str
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int m = 0;

	for (m = 0; s[m]; m++)
		;
	return (m);
}

/**
 * _strcpy - copies string from b to a
 *
 * @a: pointer to destination of string
 * @b: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *a, char *b)
{
	char *x = a;

	while (*b)
		*x++ = *b++;
	*x = '\0';
	return (a);
}

/**
 * new_dog - makes a new dog, memory and all
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 *
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (name == NULL)
		new_d->name = NULL;
	else
	{
		new_d->name = malloc(_strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = _strcpy(new_d->name, name);
	}
	if (owner == NULL)
		new_d->owner = NULL;
	else
	{
		new_d->owner = malloc(_strlen(owner) + 1);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);
}
