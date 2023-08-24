#include "monty.h"

/**
 * free_stack - Frees a stack (doubly linked list)
 * @stack: Pointer to the top of the stack
 *
 * Return: void
 */
void free_stack(stack_t **stack)
{
    stack_t *current;	
    if (stack == NULL || *stack == NULL)
        return;

    current = *stack;
    while (current != NULL)
    {
        stack_t *temp = current;
        current = current->next;
        free(temp);
    }
    *stack = NULL;
}

