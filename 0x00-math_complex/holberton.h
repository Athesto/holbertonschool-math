#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#define ABS(x) ((x) >= 0 ? (x) : -1 * (x))

/**
 * struct complex_s - complex type
 * @re: real number
 * @im: imaginary number
 */
typedef struct complex_s
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif /* _HOLBERTON_H_ */
