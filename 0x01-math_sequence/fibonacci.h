#ifndef _FIBONACCI_H_
#define _FIBONACCI_H_

#include <stdlib.h> /* malloc */

/**
 * struct cell_s - cell struct
 * @elt: heron value;
 * @next: pointer to next element
 */
typedef struct cell_s
{
	int elt;
	struct cell_s *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);
#endif /* _FIBONACCI_H_ */
