#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to the first element.
 * @n: last element.
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp;

	temp = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
