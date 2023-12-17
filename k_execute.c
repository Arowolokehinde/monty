#include "monty.h"

/**
 * execute - executes the opcode
 * @con: line content
 * @stack: head linked list - stack
 * @number: line ccounter
 * @file: pointer to monty file
 * Return: Always success
 */
int execute(char *con, stack_t **stack, unsigned int number, FILE *file)
{
	instruction_t opst[] = {
		{"push", push_to_stack}, {"pall", print_to_pall}, {"pint", pe_pint},
		{"sub", sub}, {"div", pe_div}, {"mul", k_mul}, {"mod", k_mod},
		{"pchar", k_pchar},
		{"pstr", pe_pstr},
		{"rotl", pe_rotl},
		{"rotr", k_rotr},
		{"stack", pe_stack},
		{"pop", pop_print},
		{"queue", k_queue},
		{"swap", top_swap},
		{"add", top_add},
		{"nop", k_nop},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(con, " \n\t");
	if (op && op[0] == '#')
		return (0);
	carry.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", number, op);
		fclose(file);
		free(con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
