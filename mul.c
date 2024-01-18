#include "monty.h"

/**
 * f_mul - this function multiplies the top
 * two elements of the stack.
 *
 * @head: stack head
 * @count: line_number
 * 
 * Return: no return
 */

void f_mul(stack_t **head, unsigned int count)
{
	stack_t *kha;
	int mel = 0, mas;

	kha = *head;
	while (kha)
	{
		kha = kha->next;
		mel++;
	}
	if (mel < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.ffile);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	kha = *head;
	mas = kha->next->n * kha->n;
	kha->next->n = mas;
	*head = kha->next;
	free(kha);
}
