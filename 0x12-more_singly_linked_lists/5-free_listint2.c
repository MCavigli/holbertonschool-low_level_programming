#include "lists.h"

/**
 * free_listint2 - frees a list, sets the @head to NULL
 * @head: double pointer to head of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
