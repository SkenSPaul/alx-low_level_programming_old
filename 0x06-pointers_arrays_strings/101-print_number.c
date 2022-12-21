#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: input number
 * Return: 0 Always succesful
 */

void print_number(int n);
{
	int n;

	if (n <  0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		_putchar(n / 10);
	_putchar(n % 10 + '0');
	_putchar('\n');
	return (0);
}
