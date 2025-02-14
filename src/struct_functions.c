/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:34:36 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 12:43:12 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *ft_lstnew(int  content)
{
    t_stack *node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void    ft_lstadd_back(t_stack  **lst, t_stack  *new)
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

void	ft_lstdelone(t_stack *lst)
{
	if (!lst)
		return (1);
	free(lst);
}

void	ft_lstclear(t_stack **lst)
{
	t_list	*iter;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	iter = (*lst);
	while (iter)
	{
		tmp = iter;
		iter = iter->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
