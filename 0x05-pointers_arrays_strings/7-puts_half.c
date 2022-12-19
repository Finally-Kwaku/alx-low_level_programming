#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * if number of characters is odd then, n = (length_of_the_string - 1) / 2
 * @str: Input
 *
 * Return: Half of input
 */

void puts_half(char *str)
{
	int k, j, l;

	l = 0;

	for (k = 0; str[k] != '\0'; k++)
		l++;

	j = (l / 2);

	if ((l % 2) == 1)
		j = ((l + 1) / 2);
	for (k = j; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
