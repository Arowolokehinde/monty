#include "monty.h"

/**
 * top_swap - swaps the top two elements of the stack
 * @stack: stack head
 * @number: line_number
 * Return: Always success
 */
void top_swap(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	int length = 0, aux;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	aux = temp->n;
	temp->n = temp->next->n;
	temp->next->n = aux;
}
