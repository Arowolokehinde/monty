#include "monty.h"


/**
 * k_mul - function that multiplies the top two elements of the stack.
 * @stack: points to the stack head
 * @number: The line_number
 * Return: Always success
*/

void k_mul(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	int length = 0, i;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	i = temp->next->n * temp->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp);
}
