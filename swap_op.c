#include "monty.h"

/**
 * swap_op - Swaps the top two elements of the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return: None.
 */
void swap_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    int tmp_v;
    char str_error[50];

    if (*stack == NULL || (*stack)->next == NULL)
    {
        sprintf(str_error, "L%d: can't swap, stack too short\n", line_number);
        write(2, str_error, strlen(str_error));
        exit(EXIT_FAILURE);
    }
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;

        tmp_v = ptr->n;
        ptr->n = ptr->prev->n;
        ptr->prev->n = tmp_v;
    }
}
