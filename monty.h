#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void f_module(stack_t **head, unsigned int counter);
void d_first(stack_t **head, unisgned int counter);
void f_palling(stack_t **head, unsigned int counter);
void f_pastr(stack_t **head, unsigned int counter);
void f_rot(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_addition(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_pchar(stack_t **head, unsigned int counter);
void f_push(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void free_stack(stack_t *head);
void f_mul(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);