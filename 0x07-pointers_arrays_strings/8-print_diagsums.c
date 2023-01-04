#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	for (n = 0 size - 1; n <= (size * size; n = n + size - 1)
			{
			sum2 = sum2 + a[n];
			}
	printf("%d, %d\n", sum1, sum2);
}
