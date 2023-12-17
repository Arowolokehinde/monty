#include "monty.h"
/**
 * addnode - function thats add node to the head stack
 * @stack: points to the head of the stack
 * @n: new_value
 * Return: Always success
*/
void addnode(stack_t **stack, int n)
{

	stack_t *new_node, *temp;

	temp = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
