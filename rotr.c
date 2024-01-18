#include "monty.h"

/**
  *f_rotr- this function rotates the stack to the bottom
  *@head: stack head

  *@count: line_number

  *Return: no return
  */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *mel;

	mel = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (mel->next)
	{
		mel = mel->next;
	}
	mel->next = *head;
	mel->prev->next = NULL;
	mel->prev = NULL;
	(*head)->prev = mel;
	(*head) = mel;
}
