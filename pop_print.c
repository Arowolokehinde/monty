#include "monty.h"

/**
 * pop_print - function that prints the top
 * @stack: points to the stack head
 * @number: line_number
 * Return: Always success
 */
void pop_print(stack_t **stack, unsigned int number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = temp->next;
	free(temp);
}
