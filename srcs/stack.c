#include "../includes/push_swap.h"

t_stack	*lst_new(int content)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
        t_stack  *iter;

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
