#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to the first node.
 * Return: the head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int str;

	if (*head == NULL)
		return (0);

	ptr = *head;

	str = (*head)->n;
	(*head) = (*head)->next;
	free(ptr);
	return (str);
}
