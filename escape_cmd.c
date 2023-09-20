#include "shell.h"

/**
* escape_cmd - handles the exit command
* @command: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
void escape_cmd(char **command, char *line)
{
	free(line);
	free_screen(command);
	exit(0);
}
