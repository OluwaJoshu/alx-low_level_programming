#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
