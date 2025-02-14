/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:50:32 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 08:53:45 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}