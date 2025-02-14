#include "../includes/push_swap.h"

void    fill(t_stack *stack, int content)
{
    t_stack *new;

    new = ft_lstnew(content);
    ft_lstaddback(stack, new);
}