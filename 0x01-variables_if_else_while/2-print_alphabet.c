#include <stdio.h>

/*
 * main - Prints the alphabet.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghi jk lmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
