#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number with the last digit is to printed
 * Return: value of the last digit
 */
int print_last_digit(int nld)

{
	int gld;

	gld = (nld % 10);

	if (gld < 0)
	{
		gld = (-1 * gld);
	}
	_putchar(gld + '0');
	return (gld);
