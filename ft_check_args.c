/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodolhop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:12:05 by rodolhop          #+#    #+#             */
/*   Updated: 2025/04/08 17:12:09 by rodolhop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Check if character is invalid (anything except digits, +, - and spaces)
static int	is_invalid_char(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
		return (0);
	return (1);
}

// Check all characters in input arguments
static void	alpha_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (is_invalid_char(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

// Main argument check
int	check_args(char **argv)
{
	alpha_check(argv);
	if (!check_error(argv, 1, 0))
		return (0);
	return (1);
}
