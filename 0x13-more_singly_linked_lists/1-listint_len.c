#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t elements = 1;

/*when h is NULL, return 0 as number of elements*/
if (h == NULL)
return (0);

while (h->next != NULL)
{
/*tallys the number of elements*/
if (h->n != '\0')
elements++;

/*Move to the next node*/
h = h->next;
}

return (elements);
}
