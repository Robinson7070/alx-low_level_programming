#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data inserted in the new node
 *
 * Return: Returns pointer to the new node, or NULL if the code fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

