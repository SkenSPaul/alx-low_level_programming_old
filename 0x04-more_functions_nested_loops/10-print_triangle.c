#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: Number of rows
 * Return: Triangle shape
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)

	for (i = size; i > 0; 1--)
	{
		for (j = 1; j <= size; j++)
			if (j >= i)
				_putchar('#');
			else
				_putchar(' ');
		_putcahr('\n');
	}
	else
		_putchar('\n');
}
