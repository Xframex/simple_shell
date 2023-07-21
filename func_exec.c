#include "shell.h"

/**
 * func_exec - execute arguments
 * @args: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int func_exec(char **args)
{
	char *builtin_func_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int (*builtin_func[])(char **) = {
		&func_cd,
		&func_env,
		&func_help,
		&func_exit
	};
	long unsigned int i = 0;

	if (args[0] == NULL)
	{
		/* checking for empty command was entered */
		return (-1);
	}
	/* looking for the command is a builtin */
	for (; i < sizeof(builtin_func_list) / sizeof(char *); i++)
	{
		/* if there is a match execute the builtin command */
		if (strcmp(args[0], builtin_func_list[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	/* create a new process */
	return (func_process(args));
}

