#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: the firsts node of the list
 * @str: the string in the list
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *d;
	char *take;

	if (str == NULL)
	{
		return (NULL);
	}

	d = (list_t *)malloc(sizeof(list_t));
	if (d == NULL)
	{
		return (NULL);
	}

	take = strdup(str);
	if (take == NULL)
	{
		free(d);
		return (NULL);
	}
	d->str = take;
	d->len = strlen(str);
	d->next = NULL;
	if (*head == NULL)
	{
		*head = d;
	}
	else
	{
		a = *head;
		while (a->next != NULL)
		{
			a = a->next;
		}
		a->next = d;
	}
	return (d);
}
