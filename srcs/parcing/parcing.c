/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 05:50:18 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/06 20:24:22 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	dup_check2(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	dup_check(char **av)
{
	int	i;
	int	*array;
	int	len;

	i = 0;
	len = ft_numlen(av);
	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return (1);
	while (i < len)
	{
		array[i] = ft_atol(av[i]);
		i++;
	}
	if (dup_check2(array, len) == 1)
	{
		free(array);
		return (1);
	}
	free(array);
	return (0);
}

int	checker2(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if ((av[i] == '-' && (av[i + 1]) == ' ')
			|| (av[i] == '+' && (av[i + 1]) == ' '))
			return (1);
		else if ((av[i] == '-' && !(av[i + 1]))
			|| (av[i] == '+' && !(av[i + 1])))
			return (1);
		else if ((av[i] <= 31) || (av[i] >= 33 && av[i] <= 42)
			|| (av[i] == 44 || (av[i] >= 46 && av[i] <= 47))
			|| (av[i] >= 58 && av[i] < 127))
			return (1);
		else if ((av[i] >= '0' && av[i] <= '9')
			&& (av[i + 1] == '+' || av[i + 1] == '-'))
			return (1);
		i++;
	}
	return (0);
}

int	nill_check(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!(av[i][0]))
			return (1);
		i++;
	}
	return (0);
}

int	checker(char **av)
{
	int	i;
	int	j;

	i = 0;
	if (dup_check(av) == 1)
		return (1);
	while (av[i])
	{
		j = 0;
		if (checker2(av[i]) == 1)
			return (1);
		else if ((ft_atol(av[i]) > 2147483647)
			|| (ft_atol(av[i]) < -2147483648))
			return (1);
		while (av[i][j])
		{
			if (ft_isalpha(av[i][j]) || ((av[i][j] == '-' || av[i][j] == '+')
					&& (av[i][j + 1] == '-' || av[i][j + 1] == '+')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
