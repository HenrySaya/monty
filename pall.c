#include "monty.h"
/**
 * pall - print all stack values
 * @stack: header pointer
 * @line_number: line position
 * @arg: argument
 * Return: no return
 */
void pall(stack_t **stack, unsigned int line_number, char *arg)
{
	if (!*stack)
		return;

	stack_t *node = *stack;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
