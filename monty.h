#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct carry_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @con: line content
 * @flag_chan: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct carry_s
{
	char *arg;
	FILE *file;
	char *con;
	int flag;
}  carry_t;
extern carry_t carry;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main(int argc, char *argv[]);
void pop_print(stack_t **stack, unsigned int number);
void push_to_stack(stack_t **stack, unsigned int line_number);
void print_to_pall(stack_t **stack, unsigned int number);
void top_swap(stack_t **stack, unsigned int number);
void top_add(stack_t **stack, unsigned int number);
void k_nop(stack_t **stack, unsigned int number);
void free_stack(stack_t *stack);
int execute(char *con, stack_t **stack, unsigned int number, FILE *file);
void addnode(stack_t **stack, int n);
void addqueue(stack_t **head, int n);
void pe_pint(stack_t **stack, unsigned int number);
void sub(stack_t **stack, unsigned int number);
void pe_div(stack_t **stack, unsigned int number);
void k_mul(stack_t **stack, unsigned int number);
void k_mod(stack_t **stack, unsigned int number);
void k_pchar(stack_t **stack, unsigned int number);
void pe_pstr(stack_t **stack, unsigned int number);
void pe_rotl(stack_t **stack,  __attribute__((unused)) unsigned int number);
void k_rotr(stack_t **stack, __attribute__((unused)) unsigned int number);
void pe_stack(stack_t **stack, unsigned int number);
void k_queue(stack_t **stack, unsigned int number);


#endif
