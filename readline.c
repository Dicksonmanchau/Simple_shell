#include "main.h"

/**
 * readline- function that takes user input
 *
 * Return: returns the number of characters from the standard input
 */

int readline(void)
{
	size_t n = 0;
	char *buff = NULL, *command, *argsC[MAX_ARG];
	int size, argscount;

	size = getline(&buff, &n, stdin);
	if(size == -1)
	{
		if(feof(stdin))
		{
			free(buff);
			exit(0);
		}
		else
		{
			perror("Failed to read user input");
			free(buff);
		}
	}

	command = remove_newline(buff, size);
	argscount = _tokenize(command, argsC);

	execveCmd(argsC);

	free(buff);
	return (size);
}
