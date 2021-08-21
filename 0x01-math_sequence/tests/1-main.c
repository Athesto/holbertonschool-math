#include <stdio.h>
#include "../fibonacci.h"
#include "../1-fibonacci.c"

/**
 * print_list - recursive print of a list
 * @head: head of list
 */
void print_list(t_cell *head)
{
	if (head == NULL)
		return;
	print_list(head->next);
	printf("%d ", head->elt);
}
/**
 * free_list - recursive free list
 * @head: head of list
 */
void free_list(t_cell *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
/**
 * main - fibonnaci code
 * Return: 0
 */
int main(void)
{
	t_cell *head;

	head = Fibonnaci();
	print_list(head);
	printf("\n");
	if (head)
		printf("The gold number is: %f\n", gold_number(head));
	free_list(head);
	return (0);
}
