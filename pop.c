#include "monty.h"

/**
 * f_pop - this function prints the top
 * @head: stack head
 *
 * @count: line_number
 *
 * Return: no return
 */

void f_pop(stack_t **head, unsigned int count)
{
	stack_t *k;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	*head = k->next;
	free(k);
}
