#include "lists.h"

/**
 * listint_len -  prints the number of elements in a linked listint_t list
 * @h: pointer to first element in a list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
