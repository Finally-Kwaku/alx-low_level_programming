#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by new line
 * but for multiples of three prints Fizz
 * and for multiples of five prints Buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n)
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
