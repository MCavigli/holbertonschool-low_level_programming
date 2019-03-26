#include "lists.h"

/**
 * free_listint2 - frees a list, sets the @head to NULL
 * @head: double pointer to head of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *sec;

	sec = *head;

	if (*head == NULL)
		return;

	while (sec)
	{
		temp = sec->next;
		free(sec);
		sec = temp;
	}
	*head = NULL;
}
