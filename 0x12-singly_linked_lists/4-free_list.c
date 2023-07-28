#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @head: the first list
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
