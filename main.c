#include "monty.h"

int main(int argc, char *argv[])
{
    instruction_t inst;
    stack_t *stack = NULL;
    char line[1000];
    unsigned int line_number = 1;
    FILE *file;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        free_stack(&stack);
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        free_stack(&stack);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        char opcode[50];
        if (sscanf(line, "%49s", opcode) != 1)
        {
            fprintf(stderr, "L%d: empty line\n", line_number);
            continue;
        }

        if (strcmp(opcode, "push") == 0)
        {
            char arg[50];
            if (sscanf(line, "%*s %49s", arg) != 1 || !is_integer(arg))
            {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                fclose(file);
                free_stack(&stack);
                exit(EXIT_FAILURE);
            }
            push_op(&stack, atoi(arg));
        }
        else
        {
            inst = get_instruction(opcode);
            if (inst.f == NULL)
            {
                fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
                fclose(file);
                free_stack(&stack);
                exit(EXIT_FAILURE);
            }
            inst.f(&stack, line_number);
        }
        line_number++;
    }

    fclose(file);
    free_stack(&stack);
    return (0);
}
