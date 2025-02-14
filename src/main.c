#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = atoi(av[1]);
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (check_dup(j, 4) == 1)
            {
                printf("Error\n");
                return (1);
            }
            else
                return (0);
            i++;
        }
    }
    else
        printf("Enter 2 arguments\n");
}