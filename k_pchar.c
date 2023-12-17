#include "monty.h"

/**
 * k_pchar - function that prints the char at the top of the stack,
 * followed by a new line
 * @stack: Points to the stack head
 * @number: This is the line_number
 * Return: Always success
*/

void k_pchar(stack_t **stack, unsigned int number)
{
	stack_t *temp;

	temp = *stack;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
