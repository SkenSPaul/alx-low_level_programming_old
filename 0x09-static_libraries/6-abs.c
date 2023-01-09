#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: the integer whose absolute value is to be computed.
 * Return:  the absolute value of the integer input
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
