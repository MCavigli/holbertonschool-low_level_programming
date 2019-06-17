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
	listint_t *current = NULL;
	listint_t *tmp = NULL;
	listint_t *hold = NULL;
	int result = 0;

	if (!(*list))
		return;
	current = (*list)->next;
	if (checklist(list, &current) == 1)
		return;
	while (current)
	{
		tmp = current->prev;
		checkend(&current, &tmp, *list);
		hold = current->next;
		while (tmp->n > current->n)
		{
			result = checkbeg(&current, &tmp, &hold, list);
			if (result == 1)
				continue;
			if (result == 2)
				return;
			if (checkjuice(&current, &tmp, *list) == 1)
				continue;
		}
		current = hold;
	}
}
/**
 * checklist - checks the length of list
 * @list: double pointer to doubly-linked list
 * @current: double pointer to current node
 *
 * Return: 0 or 1
 */
int checklist(listint_t **list, listint_t **current)
{
	if (!(*list)->next)
		return (1);
	if (!(*current)->next)
	{
		if ((*current)->n > (*list)->n)
			return (1);
		(*current)->prev = NULL;
		(*list)->next = NULL;
		(*current)->next = *list;
		(*list)->prev = *current;
		(*list) = *current;
		print_list(*list);
		return (1);
	}
	return (0);
}
/**
 * checkend - checks end of list for swapping
 * @list: pointer to doubly-linked list
 * @current: double pointer to current node
 * @tmp: double pointer to hold spot of node
 *
 * Return: nothing
 */
void  checkend(listint_t **current, listint_t **tmp, listint_t *list)
{
	if (!(*current)->next && (*tmp)->n > (*current)->n)
	{
		(*current)->prev = (*tmp)->prev;
		(*tmp)->next = (*current)->next;
		(*tmp)->prev->next = *current;
		(*tmp)->prev = *current;
		(*current)->next = *tmp;
		print_list(list);
		*tmp = (*current)->prev;
	}
}
/**
 * checkbeg - checks beginning of list
 * @list: double pointer to doubly-linked list
 * @current: pointer to current node
 * @hold: double pointer to position to hold
 * @tmp: double pointer to node
 * Return: 0 or 1
 */
int checkbeg(listint_t **current, listint_t **tmp,
	     listint_t **hold, listint_t **list)
{
	if ((*tmp)->prev == NULL && (*tmp)->n > (*current)->n)
	{
		(*current)->prev = (*tmp)->prev;
		(*tmp)->next = (*current)->next;
		(*tmp)->prev = *current;
		(*current)->next->prev = *tmp;
		(*current)->next = *tmp;
		*list = *current;
		print_list(*list);
		if (!(*hold)->prev)
		{
			*hold = (*tmp)->next;
			*current = *tmp;
			*tmp = (*current)->prev;
			return (2);
		}
		*current = *hold;
		return (1);
	}
	return (0);
}
/**
 * checkjuice - swaps middle nodes
 * @list:pointer to doubly-linked list
 * @current: double pointer to current node
 * @tmp: double pointer to position to hold
 *
 * Return: 0 or 1
 */
int checkjuice(listint_t **current, listint_t **tmp,
	       listint_t *list)
{
	(*current)->prev = (*tmp)->prev;
	(*tmp)->next = (*current)->next;
	(*tmp)->prev->next = *current;
	(*tmp)->prev = *current;
	if (!(*tmp)->next && (*current)->n < (list)->n)
	{
		(*current)->next = *tmp;
		*tmp = (*current)->prev;
		print_list(list);
		return (1);
	}
	(*current)->next->prev = *tmp;
	(*current)->next = *tmp;
	print_list(list);
	*tmp = (*current)->prev;
	return (0);
}
