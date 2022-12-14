#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	int ph;
	int ten;

	ten = 0;

	while (ten < 10)
	{
		for (ph = 'a'; ph <= 'z'; ph++)
		{

			_putchar(ph);
		}
		ten++;
		_putchar('\n');
	}
}

