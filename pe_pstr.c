#include "monty.h"

/**
 * pe_pstr - function that prints the string starting at the top of the stack,
 * followed by a new. Written by Pelile
 * @stack: Points to the stack head
 * @number: line_number
 * Return: Always success
*/

void pe_pstr(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	(void)number;

	temp = *stack;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
