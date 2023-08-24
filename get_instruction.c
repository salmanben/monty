#include "monty.h"

/**
 * get_instruction - Retrieves the appropriate instruction function based on opcode
 * @opcode: The opcode to look up
 *
 * Return: The instruction function corresponding to the opcode, or NULL if not found
 */
instruction_t get_instruction(char *opcode)
{
    int i;
    instruction_t not_found = {NULL, NULL};
    instruction_t opcodes[] = {
        {"push", push_op},
        {"pall", pall_op},
        {"pint", pint_op},
        {"swap", swap_op},
        {"add", add_op},
        {"nop", nop_op},
        {NULL, NULL}
    };
    
    for (i = 0; opcodes[i].opcode != NULL; i++)
    {
        if (strcmp(opcode, opcodes[i].opcode) == 0)
            return (opcodes[i]);
    }
    return (not_found);
}
