#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: pointer to the head of the list
  * @n: an integer for the node
  * Return: NULL if failure Or return address of the element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ptr;

	if (head == NULL)
		return (NULL);
	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr == NULL)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = *head;
	*head = new_ptr;
	return (new_ptr);
}
