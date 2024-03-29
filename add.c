#include "monty.h"

/**
 * f_add - this function adds the top two elements of the stack.
 * @head: stack head
 *
 * @count: line_number
 *
 * Return: no return
 */

void f_add(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	aux = k->n + k->next->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
