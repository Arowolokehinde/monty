#include "monty.h"
carry_t carry = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *con;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	carry.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		con = NULL;
		read_line = getline(&con, &size, file);
		carry.con = con;
		number++;
		if (read_line > 0)
		{
			execute(con, &stack, number, file);
		}
		free(con);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
