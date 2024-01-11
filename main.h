#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARG 325

int readline(void);
char *remove_newline(char *str, int len);
int _tokenize(char *command, char *argsC[]);
int execveCmd(char *argsC[]);

#endif
