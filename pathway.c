#include "shell.h"

/**
* find_pathway - finds the path from the global enviroment
* Return: NULL if pathway is not found or pathway is found.
*/
char *find_pathway(void)
{
	int y;
	char **domain = domains, *pathway = NULL;

	while (*domain)
	{
		if (_strncmp(*pathway, "PATH=", 5) == 0)
		{
			pathway = *domain;
			while (*pathway && y < 5)
			{
				pathway++;
				y++;
			}
			return (pathway);
		}
		domain++;
	}
	return (NULL);
}
