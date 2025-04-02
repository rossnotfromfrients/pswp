#include "push_swap.h"

int ft_checksort(t_stack *stack_a)
{
    if (!stack_a)
        return (1);
    
    while (s_stack)
    {  
        if (stack_a->nbr > stack_a->nbr->next)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}