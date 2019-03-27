#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the list to reverse
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (*head == NULL)
		return (NULL);

	first = *head;
	rest = first->next;

	if (rest == NULL)
		return (NULL);

	reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;
	*head = rest;
	return (*head);
}
