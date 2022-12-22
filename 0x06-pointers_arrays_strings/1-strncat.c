#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: fisrt parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
