#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/*---Macros---*/
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/*---PROTOTYPES---*/
/* main.c */
void shell_interactive(void);
void shell_no_interactive(void);

/* shell_interactive.c */
char *func_line(void);
char **split_line(char *line);
int func_exec(char **args);

/* func_exec */
int func_process(char **args);

/* shell_no_interactive */
char *func_stream(void);

/*---Builtin func---*/
int func_cd(char **args);
int func_exit(char **args);
int func_env(char **args);
int func_help(char **args);

#endif

