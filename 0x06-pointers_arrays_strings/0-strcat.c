#include" main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: A pointer to the string to be appended
 * @src: The source string to be appended to @dest
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	int a = -1, i;

	for (i = 0; src[i] != '\0'; i++)
		do {
			a++;
			dest[i] = src[a];
			i++;
		}
		while (src[a] != '\0')
			return (dest);
}
