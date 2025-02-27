/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:11:29 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 15:42:58 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	lstadd_front(t_stack **lst, t_stack *new, int index)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
    new->index = index;
}

t_stack *fill(char **av)
{
    int i;
    t_stack *stack;
    t_stack *head;

    i = num_len(av) - 1;
    stack = NULL;
    head = NULL;
    while (i >= 0)
    {
        stack = lstnew(ft_atol(av[i]));
        if (!stack)
        {
            lstclear(&head);
            return (NULL);
        }
        lstadd_front(&head, stack, i);
        i--;
    }
    return (head);
}