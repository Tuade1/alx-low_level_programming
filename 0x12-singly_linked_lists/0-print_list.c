#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *new = NULL;

	if (h == NULL)
	{
		return (0);
	}
	new = h;
	while (new != NULL)
	{
		i++;
		if (new->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", new->len, new->str);
		}
		new = new->next;
	}
	return (i);
}
