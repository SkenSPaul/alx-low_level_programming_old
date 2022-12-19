#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s:  a string whose length is to be determined
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
	{
		len++;
	}
	return (len);
}
