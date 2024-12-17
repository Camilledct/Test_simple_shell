#ifndef SHELL_H
#define SHELL_H

#define PROMPT "$ "
#define MAX_INPUT_SIZE 1024


/**
 * librairies 
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>


/* 
* Environnement
*/
extern char **environ;


/** 
* Fonctions prototypes
**/
void display_prompt(void);
int read_input(char *input);
void execute_command(char *command);

#endif
