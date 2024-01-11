#include "main.h"

/**
 * _tokenize - function that tokenize user input
 * @command: command received from the user
 * @argsC: storage for tokens
 *
 * Return: returns the number of tokens
 */

int _tokenize(char *command, char *argsC[])
{
	char *delim = "", *token;
	int count = 0;

	token = strtok(command, delim);

	while(token)
	{
		argsC[count++] = token;
		token = strtok(NULL, delim);
	}

	argsC[count] = NULL;

	return (count);
}
