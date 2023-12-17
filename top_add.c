#include "monty.h"

/**
 * top_add - adds the top two elements of the stack
 * @stack: stack head
 * @number: line_number
 * Return: Always success
 */
void top_add(stack_t **stack, unsigned int number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	aux = temp->n + temp->next->n;
	temp->next->n = aux;
	*stack = temp->next;
	free(temp);
}
