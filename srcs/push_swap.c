#include "../includes/push_swap.h"

void	fill(t_stack *a, int content)
{
	lst_new(a, content);
	lstadd_back(&a, a);
}
