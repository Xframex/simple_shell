include "shell.h"

/**
 * func_cd - changes directory executon env
 * @args: target directory
 *
 * Return: 1 one success, 0 otherwise.
 */
int func_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in func_cd.c: changing dir\n");
		}
	}
	return (-1);
}

