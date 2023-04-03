#include "lists.h"

/**
 * listint_len - lists the number of elements in a linked list.
 * @h: pointer to the first element.
 * Return: returns the number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
