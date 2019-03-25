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
	unsigned int counter = 0;

	temp = *head;

	if (*head == NULL)
		return (NULL);

	while (temp)
	{
		if (counter == idx)
		{
			temp->n = n;
			return (temp);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
