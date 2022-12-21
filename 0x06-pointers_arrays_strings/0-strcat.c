#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	int i, len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[le] = src[i];
		len += 1;
	}
	det[len] = '\0';
	return (dest);
}
