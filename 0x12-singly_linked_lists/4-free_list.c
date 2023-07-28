#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @head: the first list
 */

void free_list(list_t *head)
{
	list_t *new, temp;

	new = head;
	while (new != NULL)
	{
		temp = new->next;
		free(new->str);
		free(new);
		new = temp;
	}
}
