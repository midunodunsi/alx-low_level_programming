#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n - 1) + (2 * n - 1));
	}
}
