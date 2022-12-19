#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int i, len, m;

	for (len = 0; str[len] != '\0'; len++)
	{
		if ((len  % 2) == 0)
		{
			m = (len / 2);
			else
				m = (len + 1) / 2;
			for (i = m; i < len; i++)
			{
				_putchar(str[i]);
			}
			_putchar('\n');
		}
	}
}
