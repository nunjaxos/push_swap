/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:28:40 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 12:27:31 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_swap(t_stack	**stack)
{
	t_stack *tmp;
	if (!*stack || (*stack)->next == NULL)
		return (-1);
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	return (0);
}

int	ft_push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;

	if (!*stack_a)
		return (-1);
	tmp = *stack_a;
	stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	return (0);
}

int ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack || (*stack)->next == NULL)
		return (-1);
	tmp = *stack;
	last = ft_lstlast(*stack);
	last->next = tmp;
	tmp->next = NULL;
	return (0);
}

int	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*stack || (*stack)->next == NULL)
		return (-1);
	last = *stack;
	while (last -> next -> next)
		last = last -> next;
	temp = last -> next;
	last->next = NULL;
	ft_lstadd_front(stack,temp);
	return (0);
}
