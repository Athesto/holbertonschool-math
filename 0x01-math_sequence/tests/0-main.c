#include <stdio.h>
#include <stdlib.h>
#include "../heron.h"
#include "../0-heron.c"

/**
 * print_list - print list
 * @head: pointer to head of list
 */
void print_list(t_cell *head)
{
	if (head == NULL)
		return;
	print_list(head->next);
	printf("%f ", head->elt);
}

/**
 *  free_list - free list
 *  @head: pointer of list
 */
void free_list(t_cell *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	double p, u0;
	t_cell *head;

	u0 = 1;
	p = 35;
	printf("The Heron sequence until having convergence with an error "\
			"equal to 10^(-7) is:\n");
	head = heron(p, u0);
	print_list(head);
	printf("\n");
	free_list(head);
	return (0);
}

