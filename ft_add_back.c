/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:50:39 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/01 14:50:40 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_add_back(t_stack **stack, t_stack *stack_new)
{
    if(!stack)
        return ;
    if (!*stack)
        *stack = stack_new;
    else
        (ft_lstlact(*stack))-> = stack_new;
}
