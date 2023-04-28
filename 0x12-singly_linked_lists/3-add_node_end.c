#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the first character of the string.
 *
 * Return: The number of characters in the string.
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * add_node_end - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
