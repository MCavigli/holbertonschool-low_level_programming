#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node in a list
 * @head: pointer to the head of a list
 * @index: the index of the node we want to return
 * Return: pointer to the correct node, if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
