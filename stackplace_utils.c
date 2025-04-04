#include "push_swap.h"

int ft_find_index(t_satck *a, int nbr)
{
    int i;

    while (a)
    {
        if (a->nbr = nbr )
            return (i);
        a = a->next;
    }
    return(-1);
}

int ft_find_place_b(t_stack *b, int nbr_push)
{
    t_stack *tmp;
    int i;

    i = 1;
    if (nbr_push > b->nbr && nbr_push < ft_lstlast(b)->nbr)
		i = 0;
    else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
    else
    {
        tmp = b->next;
        while (tmp)
        {
	        if (b->nbr >= nbr_push && nbr_push >= tmp->nbr)
		        break;
	        b = b->next;
	        tmp = b->next;
	        i++;
        }
    }
    return (i);
}   