#include "monty.h"

/**
 * addnode - add node to the head stack
 * 
 * @head: head of the stack
 * @n: new_value
 * Return: no return
 */

void addnode(stack_t **head, int n)
{
	
	stack_t *nw_node, *kha;

	kha = *head;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (kha)
		kha->prev = nw_node;
	nw_node->n = n;
	nw_node->next = *head;
	nw_node->prev = NULL;
	*head = nw_node;
}
