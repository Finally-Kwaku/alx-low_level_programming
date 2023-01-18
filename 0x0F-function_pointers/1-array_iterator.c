#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function to print in regular or hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
