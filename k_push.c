#include "monty.h"

/**
 * push_to_stack - adds a node to the stack
 * @stack: pointer to the stack's head
 * @line_number: line number
 * Return: Always success
 */
void push_to_stack(stack_t **stack, unsigned int line_number)
{
	int n, j = 0, fl = 0;

	if (carry.arg)
	{
		if (carry.arg[0] == '-')
			j++;
		for (; carry.arg[j] != '\0'; j++)
		{
			if (carry.arg[j] > 57 || carry.arg[j] < 48)
				fl = 1;
		}
		if (fl == 1)
		{
			fprintf(stderr, "monty: L%d: usage: push integer\n", line_number);
			fclose(carry.file);
			free(carry.con);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "monty: L%d: usage: push integer\n", line_number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	n = atoi(carry.arg);
	if (carry.flag == 0)
		addnode(stack, n);
	else
		addqueue(stack, n);
}
