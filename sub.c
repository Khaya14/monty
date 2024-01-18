#include "monty.h"

/**
 * f_sub - this function - sustration
 *
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void f_sub(stack_t **head, unsigned int count)
{
	stack_t *kha;
	int mel, mas;

	kha = *head;
	for (mas = 0; kha != NULL; mas++)
		kha = kha->next;
	if (mas < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	kha = *head;
	mel = kha->next->n - kha->n;
	kha->next->n = mel;
	*head = kha->next;
	free(kha);
}
