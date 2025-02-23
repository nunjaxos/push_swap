/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:18:00 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/23 02:23:01 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int check_empty_space(char **str)
{
    int i;
    int j;
    int k;

    i = 0;
    while (str[i])
    {
        j = 0;
        k = 0;
        while (str[i][j])
        {
            if (str[i][j] == 32)
                k++;
            j++;
        }
        if (k == j)
            return (1);
        i++;
    }
    return (0);
}

int push_small_to_b_5(t_stack **stack_a, t_stack **stack_b)
{
    int min_index;

    if (!(*stack_a))
        return (1);
    min_index = find_small_index(stack_a);
    if (min_index == 1)
        sa(stack_a);
    else if (min_index == 2)
    {
        ra(stack_a);
        sa(stack_a);
    }
    else if (min_index == 3)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if (min_index == 4)
        rra(stack_a);
    pb(stack_a, stack_b);
    return (0);

}
void	norm(int *step, int *i)
{
	*step = 0;
	*i = 0;
}
int *bubble_sort(t_stack **stack)
{
    int *sorted;
    int step;
    int i;
    int tmp;
    int len;

    sorted = convert_to_arr(stack, lst_size(stack));
    len = lst_size(stack);
    norm(&step, &i);
    while (step < len - 1)
    {
        i = 0;
        while (i < len - step - 1)
        {
            if (sorted[i] > sorted[i + 1])
            {
                tmp = sorted[i];
                sorted[i] = sorted[i + 1];
                sorted[i + 1] = tmp;
            }
            i++;
        }
        step++;
    }
    return (sorted);
}