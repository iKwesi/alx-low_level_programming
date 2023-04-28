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
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
