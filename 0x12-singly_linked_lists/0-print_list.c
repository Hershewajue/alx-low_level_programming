#include "lists.h"

/**
 * print_list - this prints elements in a linked list
 *
 * @h: a pointer to head first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
size_t node_counter = 1;

if (h == NULL)
return (0);

while (h->next != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
node_counter += 1;
}
printf("[%d] %s\n", h->len, h->str);
return (node_counter);
}
