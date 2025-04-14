/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args_quoted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:20:11 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/08 17:20:13 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
