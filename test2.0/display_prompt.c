#include "shell.h"

void display_prompt(void)
{
    if (isatty(STDIN_FILENO))
    {
        printf("%s", PROMPT);
        fflush(stdout);
    }
}
