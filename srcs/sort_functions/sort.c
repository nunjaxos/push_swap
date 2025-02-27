/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:30:47 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 15:19:32 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    push_helper(t_stack **stack_b, int *arr, int *distance)
{
    int size;

    size = lst_size(stack_b);
    while (*distance)
    {
        if ((*stack_b)->next->content == arr[size - 1])
        {
            sb(stack_b);
            break;
        }
        rb (stack_b);
        *distance -= 1;
    }
}

void    push_biggest_to_top(t_stack **stack_b, int *arr)
{
	int distance;
    int biggest;
    t_stack *tmp;
    t_stack *tmp2;

    distance = 0;
    tmp2 = find_biggest(*stack_b);
    tmp = *stack_b;
    biggest = tmp2->content;
    while (tmp->content != biggest)
    {
        distance++;
        tmp = tmp->next;
    }
    if (distance < lst_size(stack_b) / 2)
        push_helper(stack_b, arr, &distance);
    else
    {
        distance = lst_size(stack_b) - distance;
        while (distance != 0)
        {
            rrb(stack_b);
            distance--;
        }    
    }
}

int sort(t_stack **stack_a, t_stack **stack_b)
{
    if (lst_size(stack_a) == 2)
        return (sort_2(stack_a));
    else if (lst_size(stack_a) == 3)
        return (sort_3(stack_a));
    else if (lst_size(stack_a) == 4)
        return (sort_4(stack_a, stack_b));
    else if (lst_size(stack_a) == 5)
        return (sort_5(stack_a, stack_b));
    
    sort_stack(stack_a, stack_b);
    return (0);
}

