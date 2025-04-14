/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   podschet_oper_ba.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:42:54 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/14 13:43:04 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Calculate ra + rb rotations
int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

// Calculate rra + rrb rotations
int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ps_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ps_lstsize(b) - ft_find_index(b, c)))
		&& ft_find_index(b, c))
		i = ps_lstsize(b) - ft_find_index(b, c);
	return (i);
}

// Calculate ra + rrb rotations
int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ps_lstsize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

// Calculate rra + rb rotations
int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ps_lstsize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
