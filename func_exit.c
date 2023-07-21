#include "shell.h"

/**
 * func_exit - process termination routine
 * @args: empty args
 *
 * Return: 0 to terminate the process
 */
int func_exit(char **args)
{
	/* exit with status */
	if (args[1])
	{
		return (atoi(args[1]));
	}
	/* exit success */
	else
	{
		return (0);
	}
}

