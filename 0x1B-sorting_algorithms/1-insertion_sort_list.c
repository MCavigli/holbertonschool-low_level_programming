#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list  of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: double pointer to doubly-linked list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *choom = NULL;
	listint_t *tmp = NULL;
	listint_t *hold = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	choom = (*list)->next;
	while (choom)
	{
		tmp = choom->prev;
		hold = choom->next;
		while (tmp && choom->n < tmp->n)
		{
			hold = choom->next;
			if (tmp->prev != NULL)
				tmp->prev->next = choom;
			choom->prev = tmp->prev;
			tmp->prev = choom;
			choom->next = tmp;
			tmp->next = hold;
			if (hold)
				hold->prev = tmp;
			if (!choom->prev)
				(*list) = choom;
			print_list(*list);
			tmp = choom->prev;
		}
		choom = hold;
	}
}
