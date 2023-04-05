#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: a pointer to a pointer to the first node of the list.
 * @idx: the index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: the value to be stored in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx,
 *         do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	/* Check if head is NULL or idx is 0, in which case insert at beginning */
	if (head == NULL || idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node at index idx-1 */
	prev_node = *head;
	for (i = 0; i < idx -1 && prev_node; i++)
		prev_node = prev_node->next;
	if (!prev_node)
		return (NULL);

	/* Create the new node and insert it after prev_node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
