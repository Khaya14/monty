#include "monty.h"

/**
 * f_div - code that divides the top two elements of the stack.
 * 
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void f_div(stack_t **head, unsigned int count)
{
	stack_t *ml;
	int len = 0, mas;
	
	ml = *head;
	while (ml)
	{
		ml = ml->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ml = *head;
	if (ml->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mas = ml->next->n / ml->n;
	ml->next->n = mas;
	*head = ml->next;
	free(ml);
}
