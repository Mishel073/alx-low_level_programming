#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 * Return: pointer to the nth node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
