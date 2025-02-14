/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:28:53 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/14 12:33:17 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft_push/libft.h"

typedef struct  s_stack
{
    int    content;
    struct  s_stack  *next;
}               t_stack;

            //parsing ;)
char    *split_helper(char *str, char **av); //helper_functions
char    **spliting_nums(char **av);  //helper_functions
char    **free_strs(char **strs);   //helper_functions
int     num_len(char **str);       //helper_functions
int     check_nill(char **av);    //parcing
int     check_invalid(char *av); //parcing
int     check_invalid_2(char **av);  //parcing
int     check_dup(int *arr, int len);//parcing
int     check_dup_2(char **av);     //parcing
long long   ft_atol(const char *str);//helper_functions

           //Instructions ;)
int ft_swap(t_stack	**stack);
int	ft_push(t_stack **stack_a, t_stack **stack_b);
int ft_rotate(t_stack **stack);
int	ft_reverse_rotate(t_stack **stack);

           //Rules ;)
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_b);
void    rrr(t_stack **stack_a, t_stack **stack_b);

#endif