#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: the data to enter for the new node
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int counter = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}


	while (temp || counter <= idx)
	{
		if (counter == idx - 1)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
		counter++;
	}
	return (NULL);
}
