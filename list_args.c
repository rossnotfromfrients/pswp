/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:21:51 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/08 17:21:53 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_args(char **argv, t_stack **stack_a)
{
	long	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_add_back(stack_a, ft_new_stack(ft_atoi(argv[i])));
		i++;
	}
}
