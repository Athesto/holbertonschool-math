#include "heron.h"
#define ABS(x) ((x) >= 0 ? (x) : -1 * (x))
t_cell *add_list(t_cell **head, double elt);

/**
 * heron - return the Heron sequence until having convergence with
 * an error less or equal to 10^-7 (1e-7)
 * @p: radicand value [root(p)]
 * @x0: initial aproximation
 * Return: list of sequences until convergence
 */
t_cell *heron(double p, double x0)
{
	static t_cell *head;
	const double error = 1 / 1e7;  /* it's 1e-7 but betty doesn't like it */
	double x1 = 0.5 * (x0 + p / x0);

	add_list(&head, x0);
	if (ABS(x0 * x0 - p) < error)
		return (head);
	return (heron(p, x1));
}

/**
 * add_list - add node into list
 * @head: reference to head of list
 * @elt: input value
 * Return: new node
 */
t_cell *add_list(t_cell **head, double elt)
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
