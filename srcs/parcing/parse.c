/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:17:21 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 14:57:39 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    error(void)
{
    write(2 , "Error\n", ft_strlen("Error\n"));
    exit(1);
}

void    parsing(t_stack **stack_a, char **str)
{
    (*stack_a) = fill(str);
    if (!*stack_a)
    {
        free_strs(str);
        error();
    }
    if (is_sorted(str) == 1)
    {
        lstclear(stack_a);
        free_strs(str);
        exit(0);
    }
}