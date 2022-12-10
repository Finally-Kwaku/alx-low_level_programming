#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int j;
	int g;

	for (k = 48; k < 58; k++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > k)
			{
				for (g = 48; g < 58; g++)
				{
					if (g > j)
					{
						putchar(k);
						putchar(j);
						putchar(g);
						if (k == 55 && j == 56 && g == 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
