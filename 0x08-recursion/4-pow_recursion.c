#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: input
 * @y: input
 * Return: value multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
