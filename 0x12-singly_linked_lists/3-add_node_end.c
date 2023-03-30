#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to the first element
 * @str: struct variable
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
