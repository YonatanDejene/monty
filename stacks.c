#include "monty.h"
#include <string.h>

int check_mode(stack_t *stack);
void free_stack(stack_t **stack);
int init_stack(stack_t **stack);

/**
 * init_stack - Initializes a stack.
 * @stack: A pointer to an unitialized stack_t stack.
 *
 * Return: -
 */

int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}

/**
 * check_mode - Checks stacks.
 * @stack: A pointer
 *
 * Return: If the stack_t is in stack mode - STACK (0).
 *         If the stack_t is in queue mode - QUEUE (1).
 *         Otherwise - 2.
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}

/**
 * free_stack - Frees a stack_t stack.
 * @stack: A pointer.
 */
void free_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
