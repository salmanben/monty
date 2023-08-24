#include "monty.h"

/**
 * nop_op - Does nothing.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Description: This opcode doesn't perform any operation and is used as
 * a placeholder or no-op instruction.
 *
 * Return: None.
 */
void nop_op(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
}

