/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:47:53 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 23:45:52 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cnt_rarb_b(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	a_idx;

	i = ft_find_location_b(b, data);
	a_idx = ft_find_idx(a, data);
	if (i < a_idx)
		i = a_idx;
	return (i);
}

int	ft_cnt_rrarrb_b(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_b;
	int	a_idx;
	int	a_stack_size;
	int	b_stack_size;

	i = 0;
	location_b = ft_find_location_b(b, data);
	a_idx = ft_find_idx(a, data);
	a_stack_size = ft_stack_size(a);
	b_stack_size = ft_stack_size(b);
	if (location_b)
		i = b_stack_size - location_b;
	if (i < (a_stack_size - a_idx) && a_idx)
		i = a_stack_size - a_idx;
	return (i);
}

int	ft_cnt_rrarb_b(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_b;
	int	a_idx;
	int	a_stack_size;

	i = 0;
	location_b = ft_find_location_b(b, data);
	a_idx = ft_find_idx(a, data);
	a_stack_size = ft_stack_size(a);
	if (a_idx)
		i = a_stack_size - a_idx;
	i = location_b + i;
	return (i);
}

int	ft_cnt_rarrb_b(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_b;
	int	b_stack_size;
	int	a_idx;

	i = 0;
	location_b = ft_find_location_b(b, data);
	b_stack_size = ft_stack_size(b);
	a_idx = ft_find_idx(a, data);
	if (location_b)
		i = b_stack_size - location_b;
	i = a_idx + i;
	return (i);
}
