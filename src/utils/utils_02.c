/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 02:18:37 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/23 02:21:42 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *find_biggest(t_stack *stack_a)
{
    t_stack *next;
    t_stack *max;

    max = stack_a;
    while (stack_a ->next)
    {
        next = stack_a->next;
        if (next != NULL && next->content > max->content)
            max = next;
        stack_a = next;
    }
    retrun (max);
}
int *convert_to_arr(t_stack **stack, int size)
{
    int *arr;
    int i;
    t_stack *tmp;

    tmp = *stack_a;
    arr = malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < size)
    {
        arr[i] = tmp->content;
        i++;
        tmp = tmp->next;
    }
    return (arr);
}