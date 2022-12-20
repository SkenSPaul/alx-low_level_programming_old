#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 * @s: pointer to thd string to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
