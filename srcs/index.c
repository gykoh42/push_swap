/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:50:59 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 21:50:48 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_idx(t_stack *stack, int data)
{
	int	i;

	i = 0;
	while (stack->data != data)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	ft_find_location_a(t_stack *stack_a, int data)
{
	int		i;
	t_stack	*tmp;
	int		min_data;

	i = 1;
	min_data = ft_min_data(stack_a);
	if (data < stack_a->data && data > ft_last_node(stack_a)->data)
		i = 0;
	else if (data > ft_max_data(stack_a) || data < min_data)
		i = ft_find_idx(stack_a, min_data);
	else
	{
		tmp = stack_a->next;
		while (stack_a->data > data || tmp->data < data)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_location_b(t_stack *stack_b, int data)
{
	int		i;
	t_stack	*tmp;
	int		max_data;

	i = 1;
	max_data = ft_max_data(stack_b);
	if (data > stack_b->data && data < ft_last_node(stack_b)->data)
		i = 0;
	else if (data > max_data || data < ft_min_data(stack_b))
		i = ft_find_idx(stack_b, max_data);
	else
	{
		tmp = stack_b->next;
		while (stack_b->data < data || tmp->data > data)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}
