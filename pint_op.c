#include "monty.h"

/**
 * pint_op - Prints the value at the top of the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return: None.
 */
void pint_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    char str_error[50];

    if (*stack == NULL)
    {
        sprintf(str_error, "L%d: can't pint, stack empty\n", line_number);
        write(2, str_error, strlen(str_error));
        exit(EXIT_FAILURE);
    }

    while (ptr->next != NULL)
        ptr = ptr->next;

    printf("%d\n", ptr->n);
}
