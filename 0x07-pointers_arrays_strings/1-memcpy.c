#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
