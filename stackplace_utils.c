#include "push_swap.h"

int ft_find_index(t_stack *a, int nbr)
{
    int i;

	i = 0;
    while (a)
    {
        if (a->nbr == nbr )
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
    if (nbr_push > b->nbr && nbr_push < ps_lstlast(b)->nbr)
		i = 0;
    else if (nbr_push > ft_maxnbr(b) || nbr_push < ft_minnbr(b))
		i = ft_find_index(b, ft_maxnbr(b));
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

int	ft_find_place_a(t_stack *a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	if (!a || !a->next)
		return (0);
	i = 1;
	if (nbr_push < a->nbr && nbr_push > ps_lstlast(a)->nbr)
		return (0);
	if (nbr_push > ft_maxnbr(a) || nbr_push < ft_minnbr(a))
		return (ft_find_index(a, ft_minnbr(a)));
	tmp = a->next;
	while (tmp)
	{
		if (a->nbr <= nbr_push && nbr_push <= tmp->nbr)
			break;
		a = a->next;
		tmp = a->next;
		i++;
	}
	return (i);
	
}
