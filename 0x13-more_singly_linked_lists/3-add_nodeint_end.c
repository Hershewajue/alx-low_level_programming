#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: the pointer to the first node of the list
 * @n: the value to be added to the new node
 *
 * Return: either NULL if it succeeds or the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

temp = *head;

/*add the node, if the head is empty*/
if (temp == NULL)
*head = new_node;
else
{
/*check if the node is not empty*/
while (temp->next != NULL)
{
/*while the condition is true, iterate through the loop*/
temp = temp->next;	
}
/*affix the fresh node to the list's end/
temp->next = new_node;
}

return (*head);
}
