/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:42:59 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/28 14:43:49 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error(void)
{
	write(2, "Error\n", ft_strlen("Error\n"));
	exit(1);
}

void	parsing(t_stack **a, char **str)
{
	(*a) = stack_fill(str);
	if (!a)
	{
		free_strs(str);
		error();
	}
	if (is_sorted(str) == 1)
	{
		ft_listclear(a);
		free_strs(str);
		exit(0);
	}
}
