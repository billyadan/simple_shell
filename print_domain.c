#include "shell.h"

/**
* print_domain - prints the domain string to stdout
*
* Return: 0
*/
void print_domain(void)
{
	int y = 0;
	char **domain = domains;

	while (domain[y])
	{
		write(STDOUT_FILENO, (const void *)domain[y], _lenstr(domain[y]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
