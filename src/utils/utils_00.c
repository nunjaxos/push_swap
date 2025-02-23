/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:25:39 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/23 00:18:00 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int lst_size(t_stack **stack_a)
{
    t_stack *tmp;
    int i;

    tmp = *stack_a;
    i = 0;
    while (tmp->next)
    {
        i++;
        tmp = tmp->next;
    }
    return(i);
}

int find_small_index(t_stack **stack_a)
{
    t_stack *tmp;
    int min;
    int i;

    tmp = *stack_a;
    min = tmp->content;
    i = 0;
    while (tmp)
    {
        if (tmp->content < min)
        {
            min = tmp->content;
            i = tmp->index;
        }
        tmp = tmp->next;
    }
    return (i);
}
int update_index(t_stack **stack_a)
{
    t_stack *tmp;
    int i;

    if (!(*stack_a))
        return (1);
    tmp = *stack_a;
    i = 0;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }
    return (0);
}
int push_small_to_b(t_stack **stack_a, t_stack **b)
{
    int small_index;
    
    if (!(*stack_a))
        return (1);
    small_index = find_small_index(stack_a);
    if (small_index == 1)
        sa(stack_a);
    else if (small_index == 2)
    {
        ra(stack_a);
        sa(stack_a);
    }
    else if (small_index == 3)
        rra(stack_a);
    pb(stack_a, stack_b);
    return (0);
}

int stack_sorted(t_stack **stack_a)
{
    t_stack *tmp;

    tmp = *stack_a;
    while (tmp->next)
    {
        if (tmp->content > tmp->next->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

