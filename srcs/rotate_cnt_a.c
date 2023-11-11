/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:44:58 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 17:25:47 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cnt_rarb_a(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = ft_find_location_a(a, data);
	if (i < ft_find_idx(b, data))
		i = ft_find_idx(b, data);
	return (i);
}

int	ft_cnt_rrarrb_a(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_location_a(a, data))
		i = ft_stack_size(a) - ft_find_location_a(a, data);
	if ((i < (ft_stack_size(b) - ft_find_idx(b, data))) && ft_find_idx(b, data))
		i = ft_stack_size(b) - ft_find_idx(b, data);
	return (i);
}

int	ft_cnt_rarrb_a(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_idx(b, data))
		i = ft_stack_size(b) - ft_find_idx(b, data);
	i = ft_find_location_a(a, data) + i;
	return (i);
}

int	ft_cnt_rrarb_a(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_location_a(a, data))
		i = ft_stack_size(a) - ft_find_location_a(a, data);
	i = ft_find_idx(b, data) + i;
	return (i);
}
