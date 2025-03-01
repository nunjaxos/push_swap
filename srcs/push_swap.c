/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:41:47 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/28 19:49:29 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**str;

	if (argc == 1)
		return (0);
	if ((empty_space_check(argv + 1)) == 1 || nill_check(argv + 1) == 1)
		error();
	str = spliting_nums(argv + 1);
	if (!str)
		error();
	b = NULL;
	a = NULL;
	if (checker(str))
	{
		ft_listclear(&a);
		free_strs(str);
		error();
	}
	parsing(&a, str);
	sort(&a, &b);
	ft_listclear(&a);
	ft_listclear(&b);
	free_strs(str);
	return (0);
}
