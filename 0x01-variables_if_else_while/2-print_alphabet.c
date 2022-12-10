#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
