#include "monty.h"

/**
  *sub- subtracts the top element of the stack from the second top
  *@stack: points to the stack head
  *@number: line_number
  *Return: Always success
 */

void sub(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	int i, fnode;

	temp = *stack;
	for (fnode = 0; temp != NULL; fnode++)
		temp = temp->next;
	if (fnode < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	i = temp->next->n - temp->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp);
}
