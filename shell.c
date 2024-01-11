#include "main.h"

/**
 * main -  entry point
 * @argc: argument count
 *@argv: argument vector
 * Return: Always 0 on success
 */

int main(int argc, char **argv)
{
	(void)argc, (void)argv;

	while(1)
	{
		write(STDOUT_FILENO, "Shell$ ", 8);
		readline();
	}

	return (0);
}
