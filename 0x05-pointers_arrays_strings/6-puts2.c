#include "main.h"

/**
 * puts2 - Function should print every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: Input
 *
 * Return: print
 */

void puts2(char *str)
{
	int l = 0;
	int k = 0;
	char *g = str;
	int j;

	while (*g != '\0')
	{
		g++;
		l++;
	}

	k = l - 1;
	for (j = 0; j <= k; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
