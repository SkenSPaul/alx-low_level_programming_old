#include "main.h"

/**
 * _isdigit -  function that checks for a digit (0 through 9)
 * @c: single input digit
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
