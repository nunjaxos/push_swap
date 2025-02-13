#include "../../includes/push_swap.h"

int	ft_swap(t_stack	**stack)
{
	t_stack *tmp;
	if (!*stack || (*stack)->next == NULL)
		return (-1);
	tmp = *stack;
	stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
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
}
