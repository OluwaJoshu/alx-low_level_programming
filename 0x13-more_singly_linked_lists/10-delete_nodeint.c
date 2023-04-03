#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index ndex.
 * @head: pointer to the first element.
 * @index: index of the node to be deleted.
 * Return: 1 for success or -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int count;

	count = 0;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (count < index && curr->next)
	{
		prev = curr;
		curr = curr->next;
		count++;
	}
	if (count < index)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
