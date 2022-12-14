#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the int to check
 *
 * Return: 1 and print + if number is greater than 0
 * 0 and print 0 is number is 0
 * -1 and prints - if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
