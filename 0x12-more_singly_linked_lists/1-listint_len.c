#include "lists.h"
/**
 * listint_len - Returns the number of elements in a list
 * @h: the list to check
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
