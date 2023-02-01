#include "lists.h"

/**
  * print_listint - prints all elements of a list
  *
  * @h: list to print elements of
  * Return: size_t of the list
  */

ize_t print_listint(const listint_t *h)

{

	int x;

	for (x = 0; h != NULL; x++)
	{
	printf("%i\n", h->n);
	h = h->next;
	}
	return (x);
}
