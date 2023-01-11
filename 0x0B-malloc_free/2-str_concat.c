#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and add together for size
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 *
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *k;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	k = malloc(sizeof(char) * (i + j + 1));

	if (k == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		k[i] = s2[j];
		i++, j++;
	}
	k[i] = '\0';
	return (k);
}
