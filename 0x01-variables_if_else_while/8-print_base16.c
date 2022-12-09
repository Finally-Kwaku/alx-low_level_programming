#include <stdio.h>

/**
 * main - Prints all numbers of bas 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	return (0);
}
