#include "monty.h"

/**
 * f_swap - code used to add the top two elements of the stack.
 * 
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void f_swap(stack_t **head, unsigned int count)
{
	stack_t *k;
	int len = 0, aux;

	k = *head;
	while (k)
	{
		k = k->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	aux = k->n;
	k->n = k->next->n;
	k->next->n = aux;
}
