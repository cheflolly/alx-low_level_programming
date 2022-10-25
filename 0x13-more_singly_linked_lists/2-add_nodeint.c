#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer of first element
 * @n: element to be added
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(struct listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (*head);
}
