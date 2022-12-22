#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
