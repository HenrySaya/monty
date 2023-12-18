#include "monty.h"
/**
 * free_stack - entry point
 * @stack: header pointer
 * Return: no return
 */
void free_stack(stack_t *stack)
{
	while (stack)
	{
		stack_t *next = stack->next;

		free(stack);

		stack = next;
	}
}
