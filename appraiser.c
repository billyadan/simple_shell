#include "shell.h"
/**
 *appraiser- checks to see weather its a built in function
 *@cmd: tokenized user input
 *@buf: line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int appraiser(char **cmd, char *buf)
{
	if (handle_inherent(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		effect(cmd[0], cmd);
		return (1);
	}
	return (0);
}