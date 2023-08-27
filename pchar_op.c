#include "monty.h"

/**
 * pchar_op - Print the character at the top of the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return: None.
 */
void pchar_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    
    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    
    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }
    while (ptr->next != NULL)
        ptr = ptr->next;

    putchar((*stack)->n);
    putchar('\n');
}
