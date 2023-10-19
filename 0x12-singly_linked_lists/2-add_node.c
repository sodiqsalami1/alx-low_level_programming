#include "lists.h"
int len(const char *str);
/**
 * add_node - add nodes to the begining
 * @head: pointer to the head of the list
 * @str: string to be inserted to the first position
 * Return: poiter to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->len = len(str);
		new_node->str = strdup(str);
		*head = new_node;
	return (*head);
}

/**
 * len - get the lenth of str
 * @str: the string
 * Return: length of return
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
