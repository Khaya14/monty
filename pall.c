#include "monty.h"

/**
 * f_pall - this function will print the stack
 * @head: stack head
 *
 * @count: no used
 * Return: no return
 */

void f_pall(stack_t **head, unsigned int count)
{
	stack_t *kha;
	(void)count;

	kha = *head;
	if (kha == NULL)
		return;
	while (kha)
	{
		printf("%d\n", kha->n);
		kha = kha->next;
	}
}
