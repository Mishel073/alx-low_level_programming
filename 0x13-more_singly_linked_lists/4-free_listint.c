#include "lists.h"

/**
 * free_listint - Free a listint_t list.
 * @head: A pointer to th listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
