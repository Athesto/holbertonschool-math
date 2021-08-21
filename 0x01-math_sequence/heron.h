#ifndef _HERON_H_
#define _HERON_H_
#include <stdlib.h> /* malloc */

/**
 * struct cell_s - cell struct
 * @elt: heron value;
 * @next: pointer to next element
 */
typedef struct cell_s
{
	double elt;
	struct cell_s *next;
} t_cell;

t_cell *heron(double p, double x0);
#endif /* _HERON_H_ */
