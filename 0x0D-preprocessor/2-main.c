#include <stdio.h>
#define NAME_H

/**
 * main -  prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	#ifdef NAME_H
		printf("%s\n", __FILE__);
	#endif
	return (0);
}
