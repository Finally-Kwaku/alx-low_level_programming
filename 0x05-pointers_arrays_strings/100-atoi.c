#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */

int _atoi(char *s)
{
	int i, j, k, l, g, digit;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	g = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && g == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = digit;

			k = k * 10 + digit;
			g = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9'0
					break;
			g = 0;
		}
		i++;
	}
	if (g == 0)
		return (0);
	return (k);
}
