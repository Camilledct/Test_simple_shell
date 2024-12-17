#include "shell.h"

int read_input(char *input)
{
    if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL)
    {
        if (isatty(STDIN_FILENO))
            printf("\n");
        return -1;
    }

    input[strcspn(input, "\n")] = '\0';
    return 0;
}
