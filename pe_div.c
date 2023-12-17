#include "monty.h"

/**
 * pe_div - function that divides the top two elements of the stack.
 * @stack: points to the stack head
 * @number: line_number
 * Return: Always success
*/
void pe_div(stack_t **stack, unsigned int number)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", number);
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
	i = temp->next->n / temp->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp);
}
