#include "main.h"

/**
 * remove_newline - fuction that removes a newline character
 * @str: user input
 * @len: length of the user input
 *
 * Return: return a command without a newline
 */

char *remove_newline(char *str, int len)
{
	if (str > 0 && str[len-1] == '\n')
		str[len - 1] = '\0';

	return (str);
}
