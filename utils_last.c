#include "push_swap.h"

t_stack *ft_lstlast(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return(lst);
}

int ft_lstsize(t_stack  *lst)
{
    size_t  i;

    i = 0;
    while (lst)
    {
        lst = lst->next
        i++;
    }
    return (i);
}

int ft_minnbr(t_stack *a)
{
    int i;

    i = a->nbr;
    while (a)
    {
        if (a->nbr < i)
            i = a->nbr;
        a = a->nbr;
    }
    return (i);
}

int ft_maxnbr(t_stack *a)
{
    int i;

    i = a->nbr;
    while (a)
    {
        if (a->nbr > i)
            i = a->nbr;
        a = a->nbr;
    }
    return (i);
}
