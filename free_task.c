#include "shell.h"

/**
* free_screen - frees screens
* @buf: screens to be freed
*
* Return: no return
*/
void free_screen(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}
