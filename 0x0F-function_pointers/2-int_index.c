#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to functions to be used to compare values
 *
 * Return: if element matches - 0, otherwise -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
