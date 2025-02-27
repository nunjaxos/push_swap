/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:28:53 by abhmidat          #+#    #+#             */
/*   Updated: 2025/02/27 15:03:19 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

 #include "../libft_push/libft.h"
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
 
typedef struct  s_stack
{
    int content;
    int index;
    struct  s_stack  *next;
}               t_stack;

           //struct functions ;)
void    lstadd_back(t_stack  **lst, t_stack  *new);
void	lstdelone(t_stack *lst);
void	lstclear(t_stack **lst);
void	lstadd_front(t_stack **lst, t_stack *new, int index);
int	lst_size(t_stack **stack_a);
t_stack	*lstlast(t_stack *lst);
t_stack *lstnew(int  content);
t_stack *fill(char **av);
            //parsing ;)
void    error(void);
void    parsing(t_stack **stack_a, char **str);
char    *split_helper(char *str, char **av);
char    **spliting_nums(char **av);
char    **free_strs(char **strs);
int     num_len(char **str);
int     check_nill(char **av);
int     check_invalid(char *av);
int     check_invalid_2(char **av);
int     check_dup(int *arr, int len);
int     check_dup_2(char **av);
long long   ft_atol(const char *str);
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
           //sort_functs ;)
           //big_sort
int get_range(t_stack **stack_a);
void    sort_helper(int *i, int *range, t_stack **b, int size);
void	sort_helper2(int *i, int *range, t_stack **b, int size);
void    push_to_a(t_stack **stack_a, t_stack **stack, int *arr, int size);
void sort_stack(t_stack **stack_a, t_stack **stack_b);
           //small_sort ;)
int sort_2(t_stack **stack_a);
int sort_3(t_stack **stack_a);
int sort_4(t_stack **stack_a, t_stack **stack_b);
int sort_5(t_stack **stack_a, t_stack **stack_b);
           //sort ;)
void    push_helper(t_stack **stack_b, int *arr, int *distance);
void    push_biggest_to_top(t_stack **stack_b, int *arr);
int sort(t_stack ** stack_a, t_stack **stack_b);
           //Utils ;)
void    helper_function(const char  *str, int *i, int *sign);
int find_small_index(t_stack **stack_a);
int update_index(t_stack **stack_a);
int push_small_to_b(t_stack **stack_a, t_stack **b);
int stack_sorted(t_stack **stack_a);
int is_sorted(char  **str);
int check_empty_space(char **str);
int push_small_to_b_5(t_stack **stack_a, t_stack **stack_b);
void	norm(int *step, int *i);
int *bubble_sort(t_stack **stack);
int *convert_to_arr(t_stack **stack, int size);
t_stack *find_biggest(t_stack *stack_a);

#endif