#include "monty.h"

/**
 * f_pstr - this function prints the string
 * starting at the top of the stack,
 * followed by a new
 *
 * @head: stack head
 *
 * @count: line_number
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *she;
	(void)counter;

	she = *head;
	while (she)
	{
		if (she->n > 127 || she->n <= 0)
		{
			break;
		}
		printf("%c", she->n);
		she = she->next;
	}
	printf("\n");
}
