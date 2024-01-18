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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	if (k->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = k->next->n / k->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
