/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:43:04 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 19:17:07 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int sort_2(t_stack **stack_a)
{
    if ((*stack_a)->content > (*stack_a)->next->content)
        sa(stack_a);
    return (0);
}

int sort_3(t_stack **stack_a)
{
    if (stack_sorted(stack_a))
        return (0);
    if ((*stack_a)->content > (*stack_a)->next->content 
        && (*stack_a)->content > (*stack_a)->next->next->content)
    {
        ra(stack_a);
        if ((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
    }
    else if((*stack_a)->content > (*stack_a)->next->content 
        && (*stack_a)->content < (*stack_a)->next->next->content)
        sa(stack_a);
    else if ((*stack_a)->content < (*stack_a)->next->content 
        && (*stack_a)->content < (*stack_a)->next->next->content)
        {
            rra(stack_a);
            if ((*stack_a)->content > (*stack_a)->next->content)
                sa(stack_a);
        }
    else if ((*stack_a)->content < (*stack_a)->next->content 
        && (*stack_a)->content > (*stack_a)->next->next->content)
        rra(stack_a);
    return (1);
}

int sort_4(t_stack **stack_a, t_stack **stack_b)
{
    if (stack_sorted(stack_a))
        return (0);
    if (push_small_to_b(stack_a, stack_b) == 1)
        return (0);
    sort_3(stack_a);
    pa(stack_a, stack_b);
	if (update_index(stack_a) == 1)
		return (0);
    return (1);
}
int sort_5(t_stack **stack_a, t_stack **stack_b)
{
    if (push_small_to_b_5(stack_a, stack_b) == 1)
        return (0);
    update_index(stack_a);
    sort_4(stack_a, stack_b);
    pa(stack_a, stack_b);
    if (update_index(stack_a))
        return (0);
    return (1);
}