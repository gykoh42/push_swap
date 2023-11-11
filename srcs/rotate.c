/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:52:08 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 17:20:38 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_do_rarb(t_stack **a, t_stack **b, int data, char s)
{
	if (s == 'a')
	{
		while ((*a)->data != data && ft_find_location_b(*b, data) > 0)
			ft_rr(a, b);
		while ((*a)->data != data)
			ft_ra(a);
		while (ft_find_location_b(*b, data) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else if (s == 'b')
	{
		while ((*b)->data != data && ft_find_location_a(*a, data) > 0)
			ft_rr(a, b);
		while ((*b)->data != data)
			ft_rb(b);
		while (ft_find_location_a(*a, data) > 0)
			ft_ra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_do_rrarrb(t_stack **a, t_stack **b, int data, char s)
{
	if (s == 'a')
	{
		while ((*a)->data != data && ft_find_location_b(*b, data) > 0)
			ft_rrr(a, b);
		while ((*a)->data != data)
			ft_rra(a);
		while (ft_find_location_b(*b, data) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else if (s == 'b')
	{
		while ((*b)->data != data && ft_find_location_a(*a, data) > 0)
			ft_rrr(a, b);
		while ((*b)->data != data)
			ft_rrb(b);
		while (ft_find_location_a(*a, data) > 0)
			ft_rra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_do_rrarb(t_stack **a, t_stack **b, int data, char s)
{
	if (s == 'a')
	{
		while ((*a)->data != data)
			ft_rra(a);
		while (ft_find_location_b(*b, data) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else if (s == 'b')
	{
		while (ft_find_location_a(*a, data) > 0)
			ft_rra(a);
		while ((*b)->data != data)
			ft_rb(b);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_do_rarrb(t_stack **a, t_stack **b, int data, char s)
{
	if (s == 'a')
	{
		while ((*a)->data != data)
			ft_ra(a);
		while (ft_find_location_b(*b, data) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else if (s == 'b')
	{
		while (ft_find_location_a(*a, data) > 0)
			ft_ra(a);
		while ((*b)->data != data)
			ft_rrb(b);
		ft_pa(a, b);
	}
	return (-1);
}
