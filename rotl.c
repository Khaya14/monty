#include "monty.h"

/**
 * f_rotl- rotates the stack to the top
 *
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *mas;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	mas = (*head)->next;
	mas->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = mas;
}
