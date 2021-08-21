#include "fibonacci.h"
#include <math.h>
#include <stdio.h>
#define ABS(x) ((x) >= 0 ? (x) : -(x))


t_cell *add_list(t_cell **head, int elt);
/**
 * Fibonnaci - fibonnaci
 * Return: list of elements
 */
t_cell *Fibonnaci(void)
{
	t_cell *head = NULL;
	/* const double GOLD_NUMBER = (0.5 + sqrt(5) / 2); */

	add_list(&head, 1);
	add_list(&head, 1);
	add_list(&head, head->elt + head->next->elt);

	while (1)
	{
		add_list(&head, head->elt + head->next->elt);
		if (ABS(gold_number(head) - gold_number(head->next)) < 1 / 1e10)
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
