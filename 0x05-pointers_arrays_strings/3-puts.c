#include "main.h"
/**
 *_puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer type char
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
