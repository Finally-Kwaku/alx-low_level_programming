#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int k = 0;
	int j = 0;
	int g;
	dog_t *dog1;

	while (name[k] != '\0')
		k++;
	while (owner[j] != '\0')
		j++;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = malloc(k * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (g = 0; g <= k; g++)
		dog1->name[g] = name[g];
	dog1->age = age;
	dog1->owner = malloc(j * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (g = 0; g <= j; g++)
	dog1->owner[g] = owner[g];
	return (dog1);
}
