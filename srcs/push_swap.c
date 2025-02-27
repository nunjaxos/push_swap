/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:22:41 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 19:26:12 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    char	**str;

    if (ac == 1)
        return (0);
    if ((check_empty_space(av + 1) == 1 || check_nill(av + 1) == 1))
        error();
    str = spliting_nums(av + 1);
    if (!str)
        error();
    stack_a = NULL;
    stack_b = NULL;
    if (check_invalid_2(str) == 1)
    {
        lstclear(&stack_a);
        free_strs(str);
        error();
    }
    parsing(&stack_a, str);
    sort(&stack_a, &stack_b);
    lstclear(&stack_a);
    lstclear(&stack_b);
    free_strs(str);
    return (0);
}