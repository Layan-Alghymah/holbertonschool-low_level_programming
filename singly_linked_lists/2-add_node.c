#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * str_len - returns length of string
 * @s: string
 *
 * Return: length
 */
unsigned int str_len(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to head pointer
 * @str: string
 *
 * Return: address of new node, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = str_len(str);
	new->next = *head;
	*head = new;

	return (new);
}
