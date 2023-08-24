#include "monty.h"

/**
 * pop_op - Removes the top element from the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return: None.
 */
void pop_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    char str_error[50];

    if (*stack == NULL)
    {
        sprintf(str_error, "L%d: can't pop an empty stack\n", line_number);
        write(2, str_error, strlen(str_error));
        exit(EXIT_FAILURE);
    }
    else
    {
        if ((*stack)->next == NULL)
        {
            free(*stack);
        }
        else
        {
            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->prev->next = NULL;
            free(ptr);
        }
    }
}
