#include "monty.h"

/**
 * k_mod - function that computes the rest of the division of the second
 * @stack: points to the stack head
 * @number: The line_number
 * Return: Always success
*/
void k_mod(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	int length = 0;
	int i;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	i = temp->next->n % temp->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp);
}

