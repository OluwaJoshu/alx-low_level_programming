#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first element.
 * @idx: position to insert the new node.
 * @n: value of new node.
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr1;
	unsigned int count = 0;

	ptr1 = malloc(sizeof(listint_t));

	if (!ptr1)
		return (NULL);

	ptr1->n = n;

	if (*head == NULL)
	{
		*head = ptr1;
		ptr1->next = NULL;
		return (ptr1);
	}

	if (idx == 0)
	{
		ptr1->next = *head;
		*head = ptr1;
		return (ptr1);
	}
	ptr = *head;

	while (count < (idx - 1) && ptr->next)
	{
		ptr = ptr->next;
		count++;
	}

	if (count < idx - 1)
		return (NULL);

	ptr1->next = ptr->next;
	ptr->next = ptr1;
	return (ptr1);
}
