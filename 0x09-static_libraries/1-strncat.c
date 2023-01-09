#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: fisrt parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int j;

	j = 0;
	while (j > n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dst[j] = '\0';
		j++;
	}
	return (dest);
}
