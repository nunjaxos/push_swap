/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:25:39 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 20:53:32 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int find_small_index(t_stack **stack_a)
{
    t_stack *tmp;
    int min;
    int index;

    tmp = *stack_a;
    min = tmp->content;
    index = 0;
    while (tmp)
    {
        if (tmp->content < min)
        {
            min = tmp->content;
            index = tmp->index;
        }
        tmp = tmp->next;
    }
    return (index);
}
int update_index(t_stack **stack)
{
    t_stack *tmp;
    int i;

    if (!(*stack))
        return (1);
    tmp = *stack;
    i = 0;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }
    return (0);
}
int push_small_to_b(t_stack **stack_a, t_stack **stack_b)
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

int stack_sorted(t_stack **stack)
{
    t_stack *tmp;

    tmp = *stack;
    while (tmp->next)
    {
        if (tmp->content > tmp->next->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}
int is_sorted(char  **str)
{
    int i;
    int j;
    int len;

    i = 0;
    j = 0;
    len = num_len(str);
    while (i < len - 1)
    {
        if (ft_atol(str[i]) < ft_atol(str[i + 1]))
            j++;
        i++;
    }
    if (j == len - 1)
        return (1);
    return (0);
}