#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: double pointer to the head of a list
 * @n: the element to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	new->prev = NULL;
	*head = new;

	return (new);
}
