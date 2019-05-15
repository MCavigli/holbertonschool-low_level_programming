#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
