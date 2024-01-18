#include "monty.h"

/**
 * f_push - code that adds a  node to the stack
 * 
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void f_push(stack_t **head, unsigned int count)
{
	int sz, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
		m++;
		for (; bus.arg[j] != '\0'; m++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	sz = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, sz);
	else
		addqueue(head, sz);
}
