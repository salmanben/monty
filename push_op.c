#include "monty.h"

/**
 * push_op - Pushes an element onto the stack
 * @stack: Pointer to a pointer to the stack's top node
 * @n: The value to push onto the stack
 */
 
void push_op(stack_t **stack, unsigned int n)
 {
    stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));
    stack_t *ptr;
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*stack == NULL) 
    {
        *stack = new_node;
    }
    else
    {
       ptr = *stack; 
       while(ptr->next != NULL)
           ptr = ptr->next;
       ptr->next = new_node;
       new_node->prev = ptr;
    }
    
}
