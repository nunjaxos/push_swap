#include "../../includes/push_swap.h"

char **free_strs(char **strs)
{
	unsigned int	i;

	i = 0;
	while(strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int num_len(char **str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

long long	ft_atol(const char *str)
{
	int	i;
	long long	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		else
			break;
		if ((result > 2147483648 && sign == -1) || (result > 2147483648 && signe == 1))
			return (result * sign);
		i++;
	}
	return (result * sign);
}

char *split_helper(char *str, char **av)
{
	int	i;
	char	*tmp;

	i = 0;
	while(av[i])
	{
		tmp = ft_strjoin(str, av[i]);
		free(str);
		str = tmp;
		tmp = ft_strjoin(str," ");
		free(str);
		str = tmp;
		i++;
	}
	return (str);
}
