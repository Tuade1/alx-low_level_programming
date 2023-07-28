#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: the linked list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *op = NULL;

	op = h;

	if (op == NULL)
	{
		return (0);
	}
	while (op != NULL)
	{
		i++;
		op = op->next;
	}
	return (i);
}
