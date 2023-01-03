#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: String
 * @accept:string
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				k++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
