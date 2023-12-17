#include "monty.h"

/**
 * print_to_pall - function that prints the stack
 * @stack: Points to the stack head
 * @number: The line not used
 * Return: Always success
 * Written by: Pelile Chintimbwe and Kehinde Arowolo
 */
void print_to_pall(stack_t **stack, unsigned int number)
{
	stack_t *temp;
	(void)number;

	temp = *stack;
	if (temp == NULL)
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
