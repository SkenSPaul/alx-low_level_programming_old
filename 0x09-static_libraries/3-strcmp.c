#include "main.h"
/**
 *_strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string
 * Return: value less than 0 if string is less than the other.
 * value greater than 0 if string is greater than the other.
 * 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	if (firstString == NULL && secondString == NULL)
		return (0);
	int counter = 0;

	while (firstString[counter] == secondString[counter])
	{
		if (firstString[counter] == '\0' && secondString[counter] == '\0')
			return (0);
		counter++;
	}
	return (firstString[counter] - secondString[counter]);
}
