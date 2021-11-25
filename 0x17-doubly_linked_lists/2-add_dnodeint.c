#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	
	if (head == NULL)
		return (NULL);
	temp= (dlistint_t *)malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head == NULL)
		*head  = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}

	return (*head);
}
