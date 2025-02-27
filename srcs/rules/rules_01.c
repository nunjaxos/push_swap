/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:47:11 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 08:50:28 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ra(t_stack **stack_a)
{
    ft_rotate(stack_a);
    write(1, "ra\n", 3);
}

void    rb(t_stack **stack_b)
{
    ft_rotate(stack_b);
    write(1, "rb\n", 3);
}

void    rr(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    write(1, "rr\n", 3);
}

void    rra(t_stack **stack_a)
{
    ft_reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

void    rrb(t_stack **stack_b)
{
    ft_reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}