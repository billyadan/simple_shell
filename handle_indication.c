#include "shell.h"

/**
 *handle_indication- it keeps track if it is in interchangeable mode
 *@m: the signal number
 *Return: nothing
 */


void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
