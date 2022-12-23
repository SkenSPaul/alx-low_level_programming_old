#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	if (NULL == *dest || NULL == *src)
	{
		return (NULL);
	}
	int index = 0, length = strlen(*dest);

	while (*src[index] != '\0')
	{
		*dest[length] = *src[index];
		length++;
		index++;
	}
	*dest[length] = '\0';
	return (*dest);
}
