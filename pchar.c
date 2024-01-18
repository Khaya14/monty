#include "monty.h"

/**
 * f_pchar - code that prints the char at the top of the stack, followed by a new line.
 *
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void f_pchar(stack_t **head, unsigned int count)
{
	stack_t *ml;

	ml = *head;
	if (!ml)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ml->n > 127 || ml->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ml->n);
}
