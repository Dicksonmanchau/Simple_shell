#include "main.h"

/**
 * execveCmd - a function that executes user commands
 * @argC: an array of commands from the user
 *
 * Returns:  returns 0 on success
 */

int execveCmd(char *argsC[])
{
	pid_t child_pid;
	int exec, status;

	child_pid = fork();
	
	if (child_pid == -1)
	{
		perror("Failed to create process.");
		exit (41);
	}
	
	else if (child_pid == 0)
	{
		/* The creation was successful and we can execute the user input */
		exec = execve(argsC[0], argsC, NULL);
		if (exec == -1)
		{
			perror("Error executing command");
		}
	}
	
	else
	{
		/* Wait for the child process to execute before terminating the parent process */
		wait(&status);
	}

	return (0);
}
