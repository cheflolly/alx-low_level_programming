#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t
 * @head: pointer to pointer of head node
 *
 * Return: 0 if list is empty, head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rem; /* rem stands for removed */

	if (*head == NULL)
		return (0);

	temp = *head;
	rem = temp->n;

	/*make head point to the next element*/
	*head = (*head)->next;
	free(temp);

	return (rem);

}
