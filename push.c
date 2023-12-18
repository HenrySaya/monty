#include "monty.h"
/**
 * push - entry point
 * @stack: head pointer
 * @line_number: line position
 * @arg: argument
 * Return: no return
 */
void push(stack_t **stack, unsigned int line_number, char *arg)
{
	int value = atoi(arg);
	stack_t *newnode;

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));

	new_node->n = value;
	new_node->next = *stack;
	(*stack) = new_node;
}
