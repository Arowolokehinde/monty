#include "monty.h"
/**
* free_stack - function that frees a doubly linked list
* written by Pelile chintimbwe
* @stack: points to the head of the stack
*/
void free_stack(stack_t *stack)
{
        stack_t *head;

        head = stack;
        while (stack)
        {
                head = stack->next;
                free(stack);
                stack = head;
        }
}
