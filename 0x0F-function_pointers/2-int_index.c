#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if size is <= 0 and if no element matches, index to the first
 * element for which the cmp does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
