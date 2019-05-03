#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: head of the linked list
 * Return: the sum of all a linked list's data, if the list is empty return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
