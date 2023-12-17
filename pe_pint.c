#include "monty.h"
/**
 * pe_pint - prints the top
 * @stack: points to the stack head
 * @number: line_number
 * Return: Always success
*/
void pe_pint(stack_t **stack, unsigned int number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number);
		fclose(carry.file);
		free(carry.con);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
