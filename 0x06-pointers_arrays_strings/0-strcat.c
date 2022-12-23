#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	if (NULL == destination || NULL == source)
	{
		return (NULL);
	}
	int index = 0, length = strlen(destination);

	while (source[index] != '\0')
	{
		destination[length] = source[index];
		length++;
		index++;
	}
	destination[length] = '\0';
	return (destination);
}
