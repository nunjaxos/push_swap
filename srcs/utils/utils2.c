/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:16:07 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 20:00:30 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	empty_space_check(char **str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		while (str[i][j])
		{
			if (str[i][j] == ' ')
				k++;
			j++;
		}
		if (k == j)
			return (1);
		i++;
	}
	return (0);
}

int	list_size(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		i++;
		temp = temp -> next;
	}
	return (i);
}

int	push_min_to_b_5(t_stack **a, t_stack **b)
{
	int	min_index;

	if (!(*a))
		return (1);
	min_index = find_min_index(a);
	if (min_index == 1)
		sa(a);
	else if (min_index == 2)
	{
		ra(a);
		sa(a);
	}
	else if (min_index == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min_index == 4)
		rra(a);
	pb(a, b);
	return (0);
}

void	give_value(int *step, int *i)
{
	*step = 0;
	*i = 0;
}

int	*bubble_sort(t_stack **stack)
{
	int	*sorted;
	int	step;
	int	i;
	int	tmp;
	int	len;

	len = list_size(stack);
	sorted = covert_to_arr(stack, list_size(stack));
	give_value(&step, &i);
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
