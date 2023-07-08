#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: input value
 * @src: input value
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[i] = src[r];
		n--;
	}
	return (dest);
}
