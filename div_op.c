#include "monty.h"

/**
 * div_op - divides the second top element of the stack
 * by the top element of the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Description: Removes the top element from the stack, adds its value to
 * the second element, and updates the stack structure accordingly.
 *
 * Return: None.
 */
void add_op(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr = *stack;
    char str_error[50];
    
    if (*stack == NULL || (*stack)->next == NULL)
    {
        sprintf(str_error, "L%d: can't div, stack too short\n", line_number);
        write(2, str_error, strlen(str_error));
        exit(EXIT_FAILURE);
    }
    else
    {   
        while (ptr->next != NULL)
            ptr = ptr->next;
           
        ptr->prev->n /= ptr->n;
        ptr->prev->next = NULL;
        free(ptr);
    }
}

