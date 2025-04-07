#include "push_swap.h"

void    ft_freestr(char **lst)
{
    char    *b;

    if (!lst)
        return ;
    while   (*lst)
    {
        b = *lst;
        lst++;
        free(b);
    }
    *lst = NULL;
}

t_stack *ft_parse_args_quoted(char **argv)
{
    t_stack *stack_a;
    char    **tmp;

    stack_a = NULL;
    tmp = ft_split(argv[1], 32);
    list_args(tmp, &stack_a);
    ft_freestr(tmp);
    free(tmp);
    return (stack_a);
}
