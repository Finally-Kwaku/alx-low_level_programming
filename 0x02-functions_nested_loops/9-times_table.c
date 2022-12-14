#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int k, j, g;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			g = k * j;

			if (g <= 9)
				_putchar(' ');
			else
				_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
