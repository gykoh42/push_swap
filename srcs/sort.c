/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:37:48 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 16:34:54 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b_until_three(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_atob(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_cnt_rarb_b(*stack_a, *stack_b, tmp->data))
				i = ft_do_rarb(stack_a, stack_b, tmp->data, 'a');
			else if (i == ft_cnt_rrarrb_b(*stack_a, *stack_b, tmp->data))
				i = ft_do_rrarrb(stack_a, stack_b, tmp->data, 'a');
			else if (i == ft_cnt_rarrb_b(*stack_a, *stack_b, tmp->data))
				i = ft_do_rarrb(stack_a, stack_b, tmp->data, 'a');
			else if (i == ft_cnt_rrarb_b(*stack_a, *stack_b, tmp->data))
				i = ft_do_rrarb(stack_a, stack_b, tmp->data, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_btoa(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_cnt_rarb_a(*stack_a, *stack_b, tmp->data))
				i = ft_do_rarb(stack_a, stack_b, tmp->data, 'b');
			else if (i == ft_cnt_rarrb_a(*stack_a, *stack_b, tmp->data))
				i = ft_do_rarrb(stack_a, stack_b, tmp->data, 'b');
			else if (i == ft_cnt_rrarrb_a(*stack_a, *stack_b, tmp->data))
				i = ft_do_rrarrb(stack_a, stack_b, tmp->data, 'b');
			else if (i == ft_cnt_rrarb_a(*stack_a, *stack_b, tmp->data))
				i = ft_do_rrarb(stack_a, stack_b, tmp->data, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_sort_b_until_three(stack_a, &stack_b);
	if (!ft_is_sorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_stack_size(*stack_a) == 2)
		ft_sa(stack_a);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_idx(*stack_a, ft_min_data(*stack_a));
		if (i < ft_stack_size(*stack_a) - i)
		{
			while ((*stack_a)->data != ft_min_data(*stack_a))
				ft_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->data != ft_min_data(*stack_a))
				ft_rra(stack_a);
		}			
	}
	ft_free_stack(&stack_b);
}
