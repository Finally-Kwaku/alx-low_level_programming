#include <stdio.h>

/**
 * main - Print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int j;
	int g;

	while (g < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (k != j && j != g && g < j && j < k)
				{
					putchar('0' + g);
					putchar('0' + j);
					putchar('0' + k);

					if (k + j + g != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		g++;
	}
	putchar('\n');
	return (0);
}
