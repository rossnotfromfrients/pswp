#include "push_swap.h"

void ft_ra(t_stack **a, int j)
{
    t_stack *tmp;

    if (!a || !(*a)->next)
        return;
    tmp = *a;
    *a = ps_lstlast(*a);
    (*a)->next = tmp;
    *a = tmp->next;
    tmp->next = NULL;
    if (j == 0)
        write(1, "ra\n", 3);
}

void ft_sa(t_stack **a, int j)
{
    t_stack *tmp;

    if (!a || !(*a)->next)
        return;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = tmp->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "sa\n", 3);
}

void ft_pa(t_stack **a, t_stack **b, int j)
{
    t_stack *tmp;

    if (!*b)
        return;
    tmp = *a;
    *b = *a;
    *b = (*b)->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "pa\n", 3);
}

void ft_rra(t_stack **a, int j)
{
    t_stack *tmp;
    int i;

    tmp = *a;
    i = 0;
    if (!a || !(*a)->next)
        return;
    while ((*a)->next)
    {
        *a = (*a)->next;
        i++;
    }
    (*a)->next = tmp;
    while (i > 1)
    {
        tmp = tmp->next;
        i--;
    }
    tmp->next = NULL;
    if (j == 0)
        write(1, "rra\n", 4);
}

void ft_ss(t_stack **a, t_stack **b, int j)
{
    t_stack *tmp;

    if (!a || !(*a)->next || !b || !(*b)->next)
        return;
    tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}
