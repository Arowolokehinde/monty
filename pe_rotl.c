#include "monty.h"

/**
  *pe_rotl- function that rotates the stack to the top
  *@stack: points to the stack head
  *@number: The line number line_number
  *Return: Always success
 */

void pe_rotl(stack_t **stack,  __attribute__((unused)) unsigned int number)
{
	stack_t *temp = *stack, *chr;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	chr = (*stack)->next;
	chr->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp;
	(*stack) = chr;
}
