#include "lists.h"

/**
 * print_listint - a method that prints every item in a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	/* if h is null, return 0 as the number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*proceed to the following node*/
		h = h->next;
		/*tally the number of nodes*/
		node_count++;
	}

	/*displays the last node*/
	printf("%d\n", h->n);

	return (node_count);
}
