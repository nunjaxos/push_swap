/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:25:35 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/28 05:05:15 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_helper(t_stack **b, int *arr, int *distance)
{
	int	size;

	size = list_size(b);
	while (*distance)
	{
		if ((*b)->next->content == arr[size - 1])
		{
			sb(b);
			break ;
		}
		rb(b);
		*distance -= 1;
	}
}

void	push_biggest_to_top(t_stack **b, int *arr)
{
	int		biggest;
	t_stack	*tmp;
	t_stack	*tmp2;
	int		distance;

	distance = 0;
	tmp2 = find_biggest(*b);
	tmp = *b;
	biggest = tmp2->content;
	while (tmp->content != biggest)
	{
		distance++;
		tmp = tmp->next;
	}
	if (distance < list_size(b) / 2)
		push_helper(b, arr, &distance);
	else
	{
		distance = list_size(b) - distance;
		while (distance != 0)
		{
			rrb(b);
			distance--;
		}
	}
}

int	sort(t_stack **a, t_stack **b)
{
	if (list_size(a) == 2)
		return (sort_2(a));
	else if (list_size(a) == 3)
		return (sort_3(a));
	else if (list_size(a) == 4)
		return (sort_4(a, b));
	else if (list_size(a) == 5)
		return (sort_5(a, b));
	sort_stack(a, b);
	return (0);
}
