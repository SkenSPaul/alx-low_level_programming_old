#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int i = 0;
	int m = 0;

	while (str[i] != '\0')
		i += 1;
	m = i / 2;
	if (i % 2 == 1)
		m += 1;
	while (str[m] != '\0')
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\0');
}
