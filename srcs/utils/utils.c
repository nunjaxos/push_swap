/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:37:36 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/10 02:34:10 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	update_index(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	if (!(*stack))
		return (1);
	while (temp)
	{
		temp -> index = i;
		i++;
		temp = temp -> next;
	}
	return (0);
}

int	find_min_index(t_stack **stack)
{
	t_stack	*temp;
	int		min;
	int		index;

	temp = *stack;
	min = temp -> content;
	index = 0;
	while (temp)
	{
		if (temp -> content < min)
		{
			min = temp -> content;
			index = temp -> index;
		}
		temp = temp -> next;
	}
	return (index);
}

int	push_min_to_b(t_stack **a, t_stack **b)
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
		rra(a);
	pb(a, b);
	return (0);
}

int	stack_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp -> next)
	{
		if (temp -> content > temp -> next -> content)
			return (0);
		temp = temp -> next;
	}
	return (1);
}

int	is_sorted(char **str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_numlen(str);
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
