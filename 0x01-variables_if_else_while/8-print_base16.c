#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char lc;

	for (num = '0'; num <= '9'; num++)
		putchar((num % '9') + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
