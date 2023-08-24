#include "monty.h"

/**
 * set_op_tok_error - Sets error code.
 * @error_code: Int.
 */

void set_op_tok_error(int error_code)
{
	char *exit_str = NULL;
	int toksLen = 0;
	int j = 0;
	char **new_toks = NULL;

	toksLen = token_arr_len();
	new_toks = malloc(sizeof(char *) * (toksLen + 2));
	if (!op_toks)
	{
		malloc_error();
		return;
	}
	while (j < toksLen)
	{
		new_toks[j] = op_toks[j];
		j++;
	}
	exit_str = get_int(error_code);
	if (!exit_str)
	{
		free(new_toks);
		malloc_error();
		return;
	}
	new_toks[i++] = exit_str;
	new_toks[i] = NULL;
	free(op_toks);
	op_toks = new_toks;
}