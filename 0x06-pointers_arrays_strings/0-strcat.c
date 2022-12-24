#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
