#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of a list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * delete_dnodeint_at_index - deletes a node at the given index
 * @head: double pointer to the head of the list
 * @index: the position of the node to delete
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *forward = *head;
	dlistint_t *current = *head;
	dlistint_t *previous = *head;
	unsigned int counter = 0;
	size_t length = dlistint_len(*head);

	if (*head == NULL || head == NULL)
		return (-1);
	if (index > length)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (counter < index)
	{
		current = current->next;
		counter++;
	}
	if (index == length)
	{
		previous = current->prev;
		previous->next = NULL;
		free(current);
		return (1);
	}

	forward = current->next;
	previous = current->prev;
	previous->next = forward;
	forward->prev = previous;
	free(current);
	return (1);
}
