#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL.
 * @head: pointer to the first element.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
}
