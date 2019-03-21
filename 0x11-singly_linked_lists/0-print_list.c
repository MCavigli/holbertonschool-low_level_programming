#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("[%i] %s\n", h->str, h->len);
		h = h->next;
		counter++;
	}
	return (counter);
}
