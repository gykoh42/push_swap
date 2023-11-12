/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:44:58 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 21:53:05 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cnt_rarb_a(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	b_idx;

	i = ft_find_location_a(a, data);
	b_idx = ft_find_idx(b, data);
	if (i < b_idx)
		i = b_idx;
	return (i);
}

int	ft_cnt_rrarrb_a(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_a;
	int	b_idx;
	int	a_stack_size;
	int	b_stack_size;

	i = 0;
	location_a = ft_find_location_a(a, data);
	b_idx = ft_find_idx(b, data);
	a_stack_size = ft_stack_size(a);
	b_stack_size = ft_stack_size(b);
	if (location_a)
		i = a_stack_size - location_a;
	if (i < (b_stack_size - b_idx) && b_idx)
		i = b_stack_size - b_idx;
	return (i);
}

int	ft_cnt_rarrb_a(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_a;
	int	b_idx;
	int	b_stack_size;

	i = 0;
	location_a = ft_find_location_a(a, data);
	b_idx = ft_find_idx(b, data);
	b_stack_size = ft_stack_size(b);
	if (b_idx)
		i = b_stack_size - b_idx;
	i = location_a + i;
	return (i);
}

int	ft_cnt_rrarb_a(t_stack *a, t_stack *b, int data)
{
	int	i;
	int	location_a;
	int	a_stack_size;
	int	b_idx;

	i = 0;
	location_a = ft_find_location_a(a, data);
	a_stack_size = ft_stack_size(a);
	b_idx = ft_find_idx(b, data);
	if (location_a)
		i = a_stack_size - location_a;
	i = b_idx + i;
	return (i);
}
