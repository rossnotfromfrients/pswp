/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   podschet_oper_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:23:34 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/08 17:23:36 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Calculate how many times we should rotate both (ra + rb)
int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

// Calculate how many times we should reverse rotate both (rra + rrb)
int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ps_lstsize(b) - ft_find_place_b(b, c);
	if ((i < (ps_lstsize(a) - ft_find_index(a, c)))
		&& ft_find_index(a, c))
		i = ps_lstsize(a) - ft_find_index(a, c);
	return (i);
}

// Calculate how many times we should do rra + rb
int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ps_lstsize(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

// Calculate how many times we should do ra + rrb
int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ps_lstsize(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
