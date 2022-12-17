#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * Return: Triangle shape
 * @size: Number of rows
 */

void print_triangle(int size)
{
	int i, j, n;

	/* Input number of rows from user */
	printf("Enter value of n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{/* Print i number of stars */
		for (j = 1; j <= i; j++)
		{
			printf("#");
		}
		/* Move to next line */
		printf("\n");
	}
	return (0);
}
