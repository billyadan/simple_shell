#include "shell.h"

/**
 * effect - executes commands entered by consumers
 *@cp: command
 *@cmd:vector array of pointers to commands
 * Return: 0
 */
void effect(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **domain = domains;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, cmd, domain);
		perror(cp);
		free(cp);
		free_screen(cmd);
		exit(98);
	}
	else
		wait(&status);
}
