#include "monty.h"

/**
 * f_queue - function that prints the top
 * 
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - function that adds a node to the tail stack
 * 
 * @n: new_value
 * @head: head of the stack
 * Return: no return
 */

void addqueue(stack_t **head, int n)
{
	stack_t *nw_node, *kha;

	kha = *head;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		printf("Error\n");
	}
	nw_node->n = n;
	nw_node->next = NULL;
	if (kha)
	{
		while (kha->next)
		kha = kha->next;
	}
	if (!kha)
	{
		*head = nw_node;
		nw_node->prev = NULL;
	}
	else
	{
		kha->next = nw_node;
		nw_node->prev = kha;
	}
}
