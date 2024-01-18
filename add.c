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
	stack_t *shez;
	int mas = 0, aux;

	shez = *head;
	while (shez)
	{
		shez = shez->next;
		mas++;
	}
	if (mas < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.ffile);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	shez = *head;
	aux = shez->n + shez->next->n;
	shez->next->n = aux;
	*head = shez->next;
	free(shez);
}
