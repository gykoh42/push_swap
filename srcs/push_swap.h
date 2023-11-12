/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:49:36 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 20:44:47 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_new_stack(int data);
t_stack	*ft_last_node(t_stack *stack);
void	ft_push_back(t_stack **stack, t_stack *new_node);
int		ft_stack_size(t_stack *stack);
int		ft_min_data(t_stack *stack);
int		ft_max_data(t_stack *stack);
int		ft_is_space(int c);
int		ft_is_digit(int c);
int		ft_is_sign(int c);
int		ft_check_argv_factor(char **argv);
int		ft_check_argv_format(char **argv);
long	ft_atoi(const char *str);
char	*ft_strndup(const char *s, size_t n);
char	**ft_free(char **rtn);
size_t	ft_word_cnt(char const *s, char c);
char	**ft_split(char const *s, char c);
void	ft_check_split(char *str, t_stack **stack);
int		ft_check_dup(t_stack *stack);
void	ft_process_argv(int argc, char **argv, t_stack **stack);
t_stack	*ft_parse_argv(int argc, char **argv);
void	ft_free_stack(t_stack **stack);
void	ft_free_str(char **str);
void	ft_error_exit(void);
void	ft_s_base(t_stack **stack);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_r_base(t_stack **stack);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rr_base(t_stack **stack);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
int		ft_is_sorted(t_stack *stack);
void	ft_sort_three(t_stack **stack_a);
int		ft_find_idx(t_stack *stack, int data);
int		ft_find_location_a(t_stack *stack_a, int data);
int		ft_find_location_b(t_stack *stack_b, int data);
int		ft_cnt_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_cnt_rrarrb_a(t_stack *a, t_stack *b, int data);
int		ft_cnt_rarrb_a(t_stack *a, t_stack *b, int data);
int		ft_cnt_rrarb_a(t_stack *a, t_stack *b, int data);
int		ft_cnt_rarb_b(t_stack *a, t_stack *b, int data);
int		ft_cnt_rrarrb_b(t_stack *a, t_stack *b, int data);
int		ft_cnt_rrarb_b(t_stack *a, t_stack *b, int data);
int		ft_cnt_rarrb_b(t_stack *a, t_stack *b, int data);
int		ft_rotate_type_atob(t_stack *a, t_stack *b);
int		ft_rotate_type_btoa(t_stack *a, t_stack *b);
int		ft_do_rarb_a(t_stack **a, t_stack **b, int c);
int		ft_do_rrarrb_a(t_stack **a, t_stack **b, int c);
int		ft_do_rrarb_a(t_stack **a, t_stack **b, int c);
int		ft_do_rarrb_a(t_stack **a, t_stack **b, int c);
int		ft_do_rarb_b(t_stack **a, t_stack **b, int c);
int		ft_do_rrarrb_b(t_stack **a, t_stack **b, int c);
int		ft_do_rrarb_b(t_stack **a, t_stack **b, int c);
int		ft_do_rarrb_b(t_stack **a, t_stack **b, int c);
void	ft_sort(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
void	ft_sort_b_until_three(t_stack **stack_a, t_stack **stack_b);

#endif