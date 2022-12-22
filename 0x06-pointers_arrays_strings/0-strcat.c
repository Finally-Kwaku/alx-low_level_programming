#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int g;

	i = 0;
	while (dest[k] != '\0')
		k++;

	j = 0;
	while (src[g] != '\0')
	{
		dest[k] = src[g];
		k++;
		g++;
	}
	dest[k] = '\0';
	return (dest);
}
