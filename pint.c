#include "monty.h"

/**
 * f_pint - code that prints out the value at the top of the stack.
 *
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void f_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
