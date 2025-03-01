
#include "../../includes/push_swap.h"

void	error(void)
{
	write(2, "Error\n", ft_strlen("Error\n"));
	exit(1);
}

void	parsing(t_stack **a, char **str)
{
	(*a) = stack_fill(str);
	if (!a)
	{
		free_strs(str);
		error();
	}
	if (is_sorted(str) == 1)
	{
		ft_listclear(a);
		free_strs(str);
		exit(0);
	}
}
