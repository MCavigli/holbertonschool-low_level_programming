#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: double pointer to the head of a list
 * @n: the element to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
