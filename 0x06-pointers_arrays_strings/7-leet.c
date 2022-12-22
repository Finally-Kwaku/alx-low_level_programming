#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int k, g;
	char s1 = "aAeEoOtTlL";
	char s2 = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (g = 0; g < 10; g++)
		{
			if (n[k] == s1[g])
			{
				n[k] = s2[g];
			}
		}
	}
	return (n);
}
