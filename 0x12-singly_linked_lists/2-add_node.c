#include "main.h"

/**
 * add_node - function to add item at the beginning of a linked_list
 * @head: head pointer to linked_list
 * @str: string to add
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchr = 0; str[nchr]; nchr++)
		;

	new->len = nchr;
	new->next = *head;
	*head = new;

	return (*head);
}
