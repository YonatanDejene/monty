#include "monty.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

char **op_toks = NULL;

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: pointer.
 *
 * Return: On success (EXIT_SUCCESS) On error (EXIT_FAILURE)
 */
int main(int argc, char **argv)
{
	FILE *script_fd = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());
	script_fd = fopen(argv[1], "r");
	if (script_fd == NULL)
		return (f_open_error(argv[1]));
	exit_code = run_monty(script_fd);
	fclose(script_fd);
	return (exit_code);
}
