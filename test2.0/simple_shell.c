#include "shell.h"

int main(void)
{
    char input[MAX_INPUT_SIZE];
    int status;

    while (1)
    {
        display_prompt();

        status = read_input(input);
        if (status == -1)
            break;

        execute_command(input);
    }

    return 0;
}
