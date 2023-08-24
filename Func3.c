#include "monty.h"

void monty_nop(stack_t **stack, unsigned int line_number);

/**
 * monty_nop - Does absolutely nothing.
 * @stack: A pointer.
 * @line_number: The current working line number.
 */
void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
