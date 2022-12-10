#include <stdio.h>

/**
 * main - Prints all possible combination of two two-digit numbers
 * Numbers should range from 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int k_g;
	int j_g;

	int a2;
	int k_g2;
	int j_g2;

	while (a <= 98)
	{
		k_g = (a / 10 + '0');
		j_g = (a % 10 + '0');
		a2 = 0;
		while (a2 <= 99)
		{
			k_g2 = (a2 / 10 + '0');
			j_g2 = (a2 % 10 + '0');

			if (a < a2)
			{
				putchar(k_g);
				putchar(j_g);
				putchar(' ');
				putchar(k_g2);
				putchar(j_g2);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
