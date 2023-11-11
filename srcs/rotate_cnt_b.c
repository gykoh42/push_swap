/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:47:53 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 17:27:06 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cnt_rarb_b(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = ft_find_location_b(b, data);
	if (i < ft_find_idx(a, data))
		i = ft_find_idx(a, data);
	return (i);
}

int	ft_cnt_rrarrb_b(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_location_b(b, data))
		i = ft_stack_size(b) - ft_find_location_b(b, data);
	if ((i < (ft_stack_size(a) - ft_find_idx(a, data))) && ft_find_idx(a, data))
		i = ft_stack_size(a) - ft_find_idx(a, data);
	return (i);
}

int	ft_cnt_rrarb_b(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_idx(a, data))
		i = ft_stack_size(a) - ft_find_idx(a, data);
	i = ft_find_location_b(b, data) + i;
	return (i);
}

int	ft_cnt_rarrb_b(t_stack *a, t_stack *b, int data)
{
	int	i;

	i = 0;
	if (ft_find_location_b(b, data))
		i = ft_stack_size(b) - ft_find_location_b(b, data);
	i = ft_find_idx(a, data) + i;
	return (i);
}
