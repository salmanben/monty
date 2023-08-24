#include "monty.h"

/**
 * pall_op - Prints all values on the stack, starting from the top.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return: None.
 */

void pall_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    (void)line_number;
    if (*stack != NULL)
    {
        while (ptr->next != NULL)
           ptr = ptr->next;
        while (ptr != NULL)
        {
            printf("%d\n", ptr->n);
            ptr = ptr->prev;
        }
    }
}
