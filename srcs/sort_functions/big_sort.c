/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 01:12:49 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 20:47:30 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int get_range(t_stack **stack_a)
{
    int size;
    int range;
    
    size = lst_size(stack_a);
    if (size >= 6 && size <= 18)
        range = 3;
    else if (size <= 100)
        range = 15;
    else if (size <= 500)
        range = 45;
    else
        range = 50;
    return (range);
}
void    sort_helper(int *i, int *range, t_stack **stack_b, int size)
{
    if (lst_size(stack_b) > 1)
        rb(stack_b);
    if (*i < *range)
        *i += 1;
    if (*range < size - 1)
        *range += 1;
}

void	sort_helper2(int *i, int *range, t_stack **stack_b, int size)
{
	if (lst_size(stack_b) > 1 && ((*stack_b)->next->content > (*stack_b)->content))
		sb(stack_b);
	if (*i < *range)
		*i += 1;
	if (*range < size - 1)
		*range += 1;
}

void    push_to_a(t_stack **stack_a, t_stack **stack_b, int *arr, int size)
{
    while ((*stack_b))
    {
        if ((*stack_b)->content == arr[size])
        {
            pa(stack_a, stack_b);
            size--;
        }
        else if ((*stack_b)->next && (*stack_b)->next->content == arr[size])
            sb(stack_b);
        else
            push_biggest_to_top(stack_b, arr);
    }
	free(arr);
}
void sort_stack(t_stack **stack_a, t_stack **stack_b)
{
    int *arr;
    int i;
    int range;
    int size;

    arr = bubble_sort(stack_a);
    i = 0;
    range = get_range(stack_a);
    size = lst_size(stack_a);
    while ((*stack_a))
    {
        if ((*stack_a)->content <= arr[i])
        {
            pb(stack_a, stack_b);
            sort_helper(&i, &range, stack_b, size);
        }
        else if ((*stack_a)->content <= arr[range])
        {
            pb(stack_a, stack_b);
            sort_helper2(&i, &range, stack_b , size);
        }
        else
            ra(stack_a);
    }
    push_to_a(stack_a, stack_b, arr, size - 1);
}