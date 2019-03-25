#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: the head node of the list
 * @n: the data to add to the node
 * Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
