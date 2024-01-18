#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - serves as a monty code interpreter
 * 
 * @argc: the number of arguments
 * @argv: the monty file location
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t t_size = 0;
	ssize_t ssiz = 1;
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
	while (ssiz > 0)
	{
		content = NULL;
		ssiz = getline(&content, &t_size, file);
		bus.content = content;
		count++;
		if (ssiz > 0)
		{
			execute(content, &stack, count, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
