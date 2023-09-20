#include "shell.h"
/**
* main - carries out the read, execute then print output loop
* @ac: argument count
* @av: argument vector
* @envp: environment vector
*
* Return: 0
*/

int main(int ac, char **av, char *envp[])
{
	char *line = NULL, *pathwaycommand = NULL, *pathway = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **command = NULL, **pathways = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, handle_indication);
	while (1)
	{
		free_screen(command);
		free_screen(pathways);
		free(pathwaycommand);
		prompt_consumer();
		linesize = getline(&line, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		command = indicator(line);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (appraiser(command, line))
			continue;
		pathway = find_pathway();
		pathways = indicator(pathway);
		pathwaycommand = test_pathway(pathways, command[0]);
		if (!pathwaycommand)
			perror(av[0]);
		else
			effect(pathwaycommand, command);
	}
	if (linesize < 0 && flags.interchangeable)
		write(STDERR_FILENO, "\n", 1);
	free(line);
	return (0);
}
