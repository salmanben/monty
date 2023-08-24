#include "monty.h"

int is_integer(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < 48 || str[i] > 57)
            return (0);
    }
    return (1);
}
