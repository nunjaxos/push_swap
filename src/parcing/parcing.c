#include "../includes/push_swap.h"

int check_nill(char **av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (!av[i][0])
            return (1);
        i++;
    }
    return (0);
}

int check_invalid(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if ((av[i] == '-' && av[i + 1]  == ' ') 
            || (av[i] == '+' && av[i + 1] == ' '))
            return (1);
        else if (av[i] = '-' && !(av[i + 1]) 
            || av[i] == '+' &&  !(av[i + 1]))
            return(1);
        else if((av[i] >= '0' && av[i] <= '9') 
            && (av[i + 1] == '-'|| av[i + 1] == '+'))
            return (1);
        else if ((av[i] >= 33 && av[i] <= 42) 
            || (av[i] == 44) || (av[i] >= 46 && av[i]<= 47) 
            || (av[i] >= 58 && av[i] <= 127))
            return (1);
        i++;
    }
    return (0);
}

int check_invalid_2(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[i])
    {
        if (check_invalid(av[i]) == 1)
            return (1);
        else if ((ft_atol(av[i]) > 2147483648) 
            || ft_atol(av[i] < -2147483647))
            return (1);
        j = 0;
        while (av[i][j])
        {
            if (ft_isalpha(av[i][j]) == 1 || (av[i][j] == '-' || av[i][j] == '+' )
                && (av[i][j + 1] == '-' || av[i][j + 1] == '+'))
                return (1);
            j++;
        }
        i++;
    }
    retrun (0);
}


int check_dup(int *arr, int len)
{
    int i;
    int j;
    
    i = 0;
    while (i < len)
    {
        j = i + 1;
        while (j < len)
        {
            if (arr[i] == arr[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
int check_dup_2(char **av)
{
    int i;
    int *arr;
    int len;

    i = 0;
    len = num_len(av);
    arr = (int *)malloc(sizeof(int) * len);
    if (!arr)
        return (1);
    while (i < len)
    {
        arr[i] = atol(av[i]);
        i++;
    }
    if (check_dup(arr, len) == 1)
    {
        free(arr);
        return (1);
    }
    free(arr);
    return (0);
}