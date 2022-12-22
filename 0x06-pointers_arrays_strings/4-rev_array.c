#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *p, i aux, k;

	p = a;

	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*n = aux;
		p--;
	}
}
