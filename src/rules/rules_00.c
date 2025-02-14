/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:39:17 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 08:45:39 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    sa(t_stack **stack_a)
{
    ft_swap(stack_a);
    write(1, "sa\n", 3);
}

void    sb(t_stack **stack_b)
{
    ft_swap(stack_b);
    write(1, "sb\n", 3);
}

void    ss(t_stack **stack_a, t_stack **stack_b)
{
    ft_swap(stack_a);
    ft_swap(stack_b);
    write(1, "ss\n", 3);
}

void    pa(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_a);
    write(1, "pa\n", 3);
}

void    pb(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_b);
    write(1, "pb\n", 3);
}