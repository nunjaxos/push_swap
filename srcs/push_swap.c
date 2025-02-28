/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:30 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/12 03:37:25 by ybouaoud         ###   ########.fr       */
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
	if (checker(str) == 1)
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
