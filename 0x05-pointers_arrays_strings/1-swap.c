#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
