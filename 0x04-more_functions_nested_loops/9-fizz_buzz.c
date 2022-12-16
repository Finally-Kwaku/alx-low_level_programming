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
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i < p)
			printf("Buzz");

			else
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
