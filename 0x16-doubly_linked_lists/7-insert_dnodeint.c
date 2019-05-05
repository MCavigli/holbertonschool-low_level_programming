#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of a list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t count = 0;
        const dlistint_t *temp = h;

        while (temp)
        {
                count++;
                temp = temp->next;
        }
        return (count);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of a linked list
 * @idx: the position where the new node should be entered
 * @n: the data to put into the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int counter = 0;
	size_t length = dlistint_len(*h);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || (h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (length == idx)
		return (add_dnodeint_end(h, n));
	while (counter < idx - 1)
	{
		temp = temp->next;
		counter++;
		if (temp->next == NULL)
			return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	new->next->prev = new;
	temp->next = new;
	return (new);
}
