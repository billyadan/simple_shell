#include "shell.h"

/**
* test_pathway - checks whether path is valid
* @pathway: tokenized path
* @command: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *test_pathway(char **pathway, char *command)
{
	int i = 0;
	char *output;

	while (pathway[i])
	{
		output = attach_path(pathway[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
