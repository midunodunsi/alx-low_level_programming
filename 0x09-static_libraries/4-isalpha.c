#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a lettre, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'A' && c <= 'Z'));
}