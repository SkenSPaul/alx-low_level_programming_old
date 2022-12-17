#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: Number of rows
 * Return: Triangle shape
 */

void print_triangle(int size)
{
	int i, j, size;

	for (i = 0; i < size; 1++)
	{
		for (j = 0; j <= i; ++j)
		{
			_putchar('#');
		}
		_putcahr('\n');
	}
	return (0);
}
