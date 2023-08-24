#include "monty.h"
/**
 * f_pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * 
 * @head: Head of the stack. 
 * @counter: Not used.
 * Return: Nothing.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
