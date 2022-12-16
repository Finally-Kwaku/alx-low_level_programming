#include <stdio.h>

/**
 * main - Find and prints the largest prime factor of the number 612852475143
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n, j;

	n = 612852475143;
	for (j = 2; j < n; j++)
	{
		while (n % j == 0)
		n = n / j;
	}
	printf("%lu\n", n);
	return (0);
}
