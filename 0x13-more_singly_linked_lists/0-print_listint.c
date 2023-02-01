#include "lists.h"

/**
  * print_listint - prints all elements of a list
  *
  * @h: list to print elements of
  * Return: size_t of the list
  */
ize_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}

