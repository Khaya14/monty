#include "monty.h"

/**
 * free_stack - function that frees a doubly linked list
 * @head: head of the stack
 */

void free_stack(stack_t *head)
{
	stack_t *kha;

	kha = head;
	while (head)
	{
		kha = head->next;
		free(head);
		head = kha;
	}
}
