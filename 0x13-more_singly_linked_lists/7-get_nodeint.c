#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a list.
 * @head: pointer to the first node.
 * @index: nth node.
 * Return: returns the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	if (count != index)
		return (NULL);
	return (0);
}
