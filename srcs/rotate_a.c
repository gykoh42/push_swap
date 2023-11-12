/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:42:43 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 23:46:42 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_do_rarb_a(t_stack **a, t_stack **b, int data)
{
	int	location_b;

	location_b = ft_find_location_b(*b, data);
	while ((*a)->data != data && location_b > 0)
	{
		ft_rr(a, b);
		location_b--;
	}
	while ((*a)->data != data)
		ft_ra(a);
	while (location_b > 0)
	{
		ft_rb(b);
		location_b--;
	}
	ft_pb(a, b);
	return (-1);
}

int	ft_do_rrarrb_a(t_stack **a, t_stack **b, int data)
{
	int	location_b;
	int	b_stack_size;

	location_b = ft_find_location_b(*b, data);
	b_stack_size = ft_stack_size(*b) - 1;
	while ((*a)->data != data && location_b > 0)
	{
		ft_rrr(a, b);
		location_b++;
		if (location_b > b_stack_size)
			location_b = 0;
	}
	while ((*a)->data != data)
		ft_rra(a);
	while (location_b > 0)
	{
		ft_rrb(b);
		location_b++;
		if (location_b > b_stack_size)
			location_b = 0;
	}
	ft_pb(a, b);
	return (-1);
}

int	ft_do_rrarb_a(t_stack **a, t_stack **b, int data)
{
	int	location_b;

	location_b = ft_find_location_b(*b, data);
	while ((*a)->data != data)
		ft_rra(a);
	while (location_b > 0)
	{
		ft_rb(b);
		location_b--;
	}
	ft_pb(a, b);
	return (-1);
}

int	ft_do_rarrb_a(t_stack **a, t_stack **b, int data)
{
	int	location_b;
	int	b_stack_size;

	location_b = ft_find_location_b(*b, data);
	b_stack_size = ft_stack_size(*b) - 1;
	while ((*a)->data != data)
		ft_ra(a);
	while (location_b > 0)
	{
		ft_rrb(b);
		location_b++;
		if (location_b > b_stack_size)
			location_b = 0;
	}
	ft_pb(a, b);
	return (-1);
}
