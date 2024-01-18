#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[]) 
{
	char *content = NULL;
	FILE *file;
	size_t t_size = 0;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2) 
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file) 
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((content = malloc(t_size + 1)) != NULL && fgets(content, t_size + 1, file) != NULL) 
	{
		count++;
		execute(content, &stack, count, file);
		free(content);
	}

	free_stack(stack);
	fclose(file);
	return 0;
}

