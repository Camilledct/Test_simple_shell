#include "shell.h"

void execute_command(char *command)
{
    pid_t pid;
    int status;
    char *args[2];

    if (command == NULL || strlen(command) == 0)
        return;

    args[0] = command;
    args[1] = NULL;

    pid = fork();
    if (pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if (execve(command, args, environ) == -1)
        {
            fprintf(stderr, "./hsh: 1: %s: not found\n", command);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        waitpid(pid, &status, 0);
    }
}
