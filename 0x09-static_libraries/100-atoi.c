#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while ((s[i] <= 'g' && (s[i] >= '0') && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
