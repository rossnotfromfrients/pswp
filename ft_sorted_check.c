/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:21:15 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/08 17:21:17 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checksorted(t_stack *stack_a)
{
    if (!stack_a)
        return (1);
    
    while (stack_a && stack_a->next)
    {  
        if (stack_a->nbr > stack_a->next->nbr)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}
