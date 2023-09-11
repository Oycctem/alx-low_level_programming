#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - function that creates a new dog
 *@name: char
 *@age: float
 *@owner: char
 *Return: returning dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, n = 0, x = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	while (name[i])
		i++;
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (x < i)
	{
		dog->name[x] = name[x];
		x++;
	}
	dog->age = age;
	while (owner[n])
		n++;
	n++;
	dog->owner = malloc(n * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < n; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
