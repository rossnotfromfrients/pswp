#include "push_swap.h"

int ft_checksorted(t_stack *stack_a)
{
    if (!stack_a)
        return (1);
    
    while (stack_a)
    {  
        if (stack_a->nbr > stack_a->next->nbr)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}