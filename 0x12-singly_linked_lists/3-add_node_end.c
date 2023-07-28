#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the firsts node of the list
 * @str: the string in the list
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	const list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = NULL;

	new->next = *head;
	*head = new;
	return (*new);
}
