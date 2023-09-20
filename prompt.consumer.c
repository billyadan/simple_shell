#include "shell.h"

/**
* prompt_consumer - prints $ to let consumer know the program is
* ready to take their input
* prints the prompt if the shell is in interchangeable mode
* Return: no return
*/
void prompt_consumer(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interchangeable = 1;
	if (flags.interchangeable)
		write(STDERR_FILENO, "$ ", 2);
}
