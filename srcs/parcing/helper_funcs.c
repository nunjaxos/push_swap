/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:43:12 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/28 14:43:43 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**free_strs(char **strs)
{
	unsigned int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	ft_numlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long long	ft_atol(const char *str)
{
	int			index;
	long long	results;
	int			sign;

	index = 0;
	results = 0;
	sign = 1;
	helper_func(str, &index, &sign);
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
			results = (results * 10) + (str[index] - '0');
		else
			break ;
		if ((results > 2147483648 && sign == -1)
			|| (results > 2147483647 && sign == 1))
			return (results * sign);
		index++;
	}
	return (results * sign);
}

char	*split_helper(char *str, char **av)
{
	int		i;
	char	*temp;

	i = 0;
	while (av[i])
	{
		temp = ft_strjoin(str, av[i]);
		free(str);
		str = temp;
		temp = ft_strjoin(str, " ");
		free(str);
		str = temp;
		i++;
	}
	return (str);
}

char	**spliting_nums(char **av)
{
	int			i;
	char		**array;
	char		*str;
	char		**result;

	i = 0;
	str = ft_strdup("");
	while (av[i])
	{
		array = ft_split(av[i], ' ');
		str = split_helper(str, array);
		free_strs(array);
		i++;
	}
	result = ft_split(str, ' ');
	free(str);
	return (result);
}
