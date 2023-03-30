#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements
 * @h: pointer to the address of the first element
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
