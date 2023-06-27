#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: 0
 */

void print_rev(char *s)

{

	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; 0 > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
