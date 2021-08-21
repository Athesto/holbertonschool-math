#include "fibonacci.h"
#include <math.h>
#include <stdio.h>


t_cell *add_list(t_cell **head, int elt);
/**
 * Fibonnaci - fibonnaci
 * Return: list of elements
 */
t_cell *Fibonnaci(void)
{
	t_cell *head = NULL;

	add_list(&head, 1);
	add_list(&head, 1);

	while (1)
	{
		add_list(&head, head->elt + head->next->elt);
		if (gold_number(head) == gold_number(head->next))
			break;
	}

	return (head);
}

/**
 * gold_number - calculate gold number
 * @head: head of fibonacci
 * Return: number aprox
 */
double gold_number(t_cell *head)
{
	return ((float)head->elt / (float)head->next->elt);
}

/**
 * add_list - add node into list
 * @head: reference to head
 * @elt: input value
 * Return: new node
 */
t_cell *add_list(t_cell **head, int elt)
{
	t_cell *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->elt = elt;
	node->next = *head;
	*head = node;
	return (node);
}
