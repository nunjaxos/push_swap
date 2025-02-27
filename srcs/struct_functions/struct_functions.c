/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:34:36 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 19:20:01 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *lstnew(int  content)
{
    t_stack *node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int lst_size(t_stack **stack_a)
{
    t_stack *tmp;
    int i;

    tmp = *stack_a;
    i = 0;
    while (tmp->next)
    {
        i++;
        tmp = tmp->next;
    }
    return(i);
}

void    lstadd_back(t_stack  **lst, t_stack  *new)
{
	t_stack *iter;

	if (!lst || !new)
		return ;
	iter = *lst;
	if (!iter)
		*lst = new;
	else
	{
		while (iter->next)
			iter = iter->next;
		iter->next = new;
	}
}

void	lstdelone(t_stack *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	lstclear(t_stack **lst)
{
	t_stack	*iter;
	t_stack	*tmp;

	if (!lst)
		return ;
	iter = *lst;
	while (iter)
	{
		tmp = iter->next;
		lstdelone(tmp);
		iter = tmp;
	}
	*lst = NULL;
}
