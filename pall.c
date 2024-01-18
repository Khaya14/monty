#include "monty.h"

/**
 * f_pall - this function will print the stack
 * @head: stack head
 *
 * @count: no used
 * Return: no return
 */

void f_pall(stack_t **head, unsigned int count)
{
	stack_t *k;
	(void)count;

	k = *head;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
