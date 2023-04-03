#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the first element.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr == NULL)
			printf("0");
		else
			printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
