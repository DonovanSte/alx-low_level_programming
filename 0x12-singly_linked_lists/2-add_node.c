#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		/* Duplicate str */
		new_node->str = strdup(str);
		/* Free unused memory */
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		/* store length of string */
		while (str[len] != '\0')
			len++;
	}
	else
	{
		new_node->str = NULL;
		len = 0;
	}
	/* Set next field and pointer to new_node */
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return(new_node);
}
