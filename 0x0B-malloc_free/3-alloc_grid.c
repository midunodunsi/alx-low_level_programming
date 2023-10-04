#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);

		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);

			free(s);
			return (NULL);
		}

	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			s[x][y] = 0;
	}

	return (s);
}
