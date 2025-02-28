/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 04:53:50 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/06 20:50:42 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || (*stack)->next == NULL)
		return (-1);
	temp = *stack;
	*stack = (*stack)->next;
	temp -> next = (*stack)->next;
	(*stack)->next = temp;
	return (0);
}

int	ft_push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	if (!*stack1)
		return (-1);
	temp = *stack1;
	*stack1 = (*stack1)->next;
	temp->next = *stack2;
	*stack2 = temp;
	return (0);
}

int	ft_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*stack || (*stack)->next == NULL)
		return (-1);
	temp = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last -> next)
		last = last -> next;
	last -> next = temp;
	temp -> next = NULL;
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
	last -> next = NULL;
	temp -> next = *stack;
	*stack = temp;
	return (0);
}
