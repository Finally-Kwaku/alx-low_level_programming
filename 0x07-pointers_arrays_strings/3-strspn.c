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
	unsigned int k, g;

	for (g = 0; *(s + g); g++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(s + j) == *(accept + k))
				break;
		}
	if (*(accept + k) == '\0')
		break;
	}
	return (j);
}
