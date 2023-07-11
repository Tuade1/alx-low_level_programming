#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimentional array
 * of integers
 * @width: the width of the 2 dimensional array
 * @height: the height of the 2 dimentional array
 * Return: NULL on failure, the pointer to the array on success
 */
int **alloc_grid(int width, int height)
{
	int h;
	int i;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * (sizeof(int)));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (h = 0; h < i; h++)
			{
				free(a[h]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
