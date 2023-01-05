#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime2(n, 2));
}
