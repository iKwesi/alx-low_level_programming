#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: the list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
