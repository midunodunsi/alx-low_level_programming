#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Entry point
 * @n: input
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point
 * @n: input
 * @i: input
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i *i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
