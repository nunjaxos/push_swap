/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:43:37 by abhmidat          #+#    #+#             */
/*   Updated: 2025/03/01 19:30:04 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

		//sort;)
int					sort(t_stack **a, t_stack **b);

		//instructions;)
int					ft_swap(t_stack **stack);
int					ft_push(t_stack **stack1, t_stack **stack2);
int					ft_rotate(t_stack **stack);
int					ft_reverse_rotate(t_stack **stack);

		//small sort functions;)
int					sort_2(t_stack **stack_a);
int					sort_3(t_stack **a);
int					sort_4(t_stack **stack_a, t_stack **stack_b);
int					sort_5(t_stack **stack_a, t_stack **stack_b);
int					update_index(t_stack **stack);
int					find_min_index(t_stack **stack);
int					push_min_to_b(t_stack **a, t_stack **b);
int					push_min_to_b_5(t_stack **a, t_stack **b);

		//big sort functions;)
void				push_biggest_to_top(t_stack **b, int *arr);
void				sort_stack(t_stack **a, t_stack **b);
void				push_to_a(t_stack **a, t_stack **b, int *arr, int size);
void				sort_helper(int *i, int *range, t_stack **b, int size);
void				sort_helper2(int *i, int *range, t_stack **b, int size);
void				give_value(int *step);
void				push_helper(t_stack **b, int *arr, int *distance);
int					*bubble_sort(t_stack **stack);
int					*covert_to_arr(t_stack **a, int size);

		//rules;)
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

		//helper funcs;)
void				helper_func(const char *str, int *index, int *sign);
void				ft_listclear(t_stack **list);
void				ft_listdelone(t_stack *list);
char				**spliting_nums(char **av);
char				**free_strs(char **strs);
char				*split_helper(char *str, char **av);
int					ft_numlen(char **str);
int					stack_sorted(t_stack **stack);
int					list_size(t_stack **stack);
long long			ft_atol(const char *str);
void				parsing(t_stack **a, char **str);
int					checker(char **av);
int					checker2(char *av);
int					checker3(char **av);
int					dup_check(char **av);
int					nill_check(char **av);
int					dup_check2(int *array, int len);
int					is_sorted(char **str);
int					empty_space_check(char **str);
void				error(void);

		//node functions;)
void				add_node_to_list(t_stack **list, t_stack *stack, int index);
t_stack				*stack_fill(char **argv);
t_stack				*create_node(int content);
t_stack				*find_biggest(t_stack *stack);

#endif
