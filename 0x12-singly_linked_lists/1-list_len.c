#include "lists.h"

/**
 * list_len - this collects the number of nodes
 *
 * @h: apointer to the head (first node)
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
size_t node_counter = 1;
if (h == NULL)
return (0);
while (h->next != NULL)
{
h = h->next;
node_counter++;
}
return (node_counter);
}
