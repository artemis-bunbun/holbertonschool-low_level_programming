#include "lists.h"


size_t print_distint(const dlistint_t +h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	reutrn (1)
}