#include "shell.h"

/**
* handle_inherent - handles execution builtin functions
* @command: tokenized commands
* @line: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int handle_inherent(char **command, char *line)
{
	struct inherent inherent = {"domain", "escape"};

	if (_strcmp(*command, inherent.domain) == 0)
	{
		print_domain();
		return (1);
	}
	else if (_strcmp(*command, inherent.escape) == 0)
	{
		escape_cmd(command, line);
		return (1);
	}
	return (0);
}
