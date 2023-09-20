#include "shell.h"

/**
* attach_pathway - adds pathway to command
* @path: pathway of command
* @command: consumer entered command
*
* Return: buffer containing command with pathway on success
* NULL on failure
*/
char *attach_pathway(char *pathway, char *command)
{
	char *buf;
	size_t i = 0, j = 0;

	if (command == 0)
		command = "";

	if (pathway == 0)
		pathway = "";

	buf = malloc(sizeof(char) * (_lenstr(pathway) + _lenstr(command) + 2));
	if (!buf)
		return (NULL);

	while (pathway[i])
	{
		buf[i] = pathway[i];
		i++;
	}

	if (pathway[i - 1] != '/')
	{
		buf[i] = '/';
		i++;
	}
	while (command[j])
	{
		buf[i + j] = command[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}
