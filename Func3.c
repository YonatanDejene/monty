#include "monty.h"

void monty_pstr(stack_t **stack, unsigned int line_number);
void monty_nop(stack_t **stack, unsigned int line_number);
void monty_pchar(stack_t **stack, unsigned int line_number);

/**
 * monty_pchar - Prints the character in the top value.
 * @stack: A pointer.
 * @line_number: The current working line number.
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		set_op_tok_error(pchar_error(line_number,
					     "value out of range"));
		return;
	}

	printf("%c\n", (*stack)->next->n);
}

/**
 * monty_pstr - Prints the string.
 * @stack: A pointer.
 * @line_number: The current working line number.
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack)->next;

	while (temp && temp->n != 0 && (temp->n > 0 && temp->n <= 127))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}

	printf("\n");

	(void)line_number;
}

/**
 * monty_nop - Doesnothing for the Monty.
 * @stack: A pointer.
 * @line_number: The current working line number.
 */

void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}