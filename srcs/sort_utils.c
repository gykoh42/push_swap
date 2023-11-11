/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:34:43 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 16:34:28 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
	int	i;

	i = stack->data;
	while (stack)
	{
		if (i > stack->data)
			return (0);
		i = stack->data;
		stack = stack->next;
	}
	return (1);
}

void	ft_sort_three(t_stack **a)
{
	if (ft_max_data(*a) == (*a)->data)
	{
		ft_ra(a);
		if (!ft_is_sorted(*a))
			ft_sa(a);
	}
	else if (ft_min_data(*a) == (*a)->data)
	{
		if (!ft_is_sorted(*a))
		{
			ft_rra(a);
			ft_sa(a);
		}
	}
	else
	{
		if ((*a)->next->data < (*a)->next->next->data)
			ft_sa(a);
		else
			ft_rra(a);
	}
}
