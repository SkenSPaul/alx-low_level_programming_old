#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s:  a string whose length is to be determined
 * Return: len
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
	sum++;
	pl = s[i++];
	}
	return (sum);
}
