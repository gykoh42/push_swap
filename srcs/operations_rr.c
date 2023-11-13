/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:27 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/13 20:32:26 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr_base(t_stack **stack)
{
	t_stack	*last;
	t_stack	*last_prev;

	if (!*stack || !(*stack)->next)
		return ;
	last = ft_last_node(*stack);
	last_prev = *stack;
	while (last_prev->next != last)
		last_prev = last_prev->next;
	last_prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_rra(t_stack **a)
{
	ft_rr_base(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_rr_base(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rr_base(a);
	ft_rr_base(b);
	write(1, "rrr\n", 4);
}
