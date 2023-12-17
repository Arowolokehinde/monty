#include "monty.h"

/**
  *k_rotr- function that rotates the stack to the bottom
  *@stack: points to the stack head
  *@number: The line_number
  *Return: Always success
 */
void k_rotr(stack_t **stack, __attribute__((unused)) unsigned int number)
{
	stack_t *cpy;

	cpy = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *stack;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*stack)->prev = cpy;
	(*stack) = cpy;
}
