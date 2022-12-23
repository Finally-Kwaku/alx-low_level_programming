#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int g, j, k;

	g = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (g < size)
	{
		j = size - g < 10 ? size - g : 10;
		printf("%08x: ", g);

		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + g + k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int c = *(b + g + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		g += 10;
	}
}
