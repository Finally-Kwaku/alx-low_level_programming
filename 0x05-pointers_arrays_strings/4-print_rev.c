#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int l = 0;
	int j;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;

	for (j = l, j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
