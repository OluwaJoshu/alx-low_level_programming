#include "lists.h"

/**
 * sum_listint - sums up all the data.
 * @head: pointer to the first element.
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = NULL;
	int sum = 0;

	ptr = head;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
