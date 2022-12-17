#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * Return: Triangle shape
 * @size: Number of rows
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			putchar("#");
		}
		putchar("\n");
	}
	return (0);
}
