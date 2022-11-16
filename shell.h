#ifndef SHELL_H
#define SHELL_H

void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>

#endif
