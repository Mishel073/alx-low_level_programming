#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a pointer to the list
 *
 *Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
