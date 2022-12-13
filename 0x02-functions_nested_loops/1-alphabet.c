#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
		_putchar(lr);
	_putchar('\n');
}
