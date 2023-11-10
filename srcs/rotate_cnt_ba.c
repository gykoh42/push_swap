/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_ba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:44:58 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 05:09:47 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_location_a(a, c);
	if (i < ft_find_idx(b, c))
		i = ft_find_idx(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_location_a(a, c))
		i = ft_stack_size(a) - ft_find_location_a(a, c);
	if ((i < (ft_stack_size(b) - ft_find_idx(b, c))) && ft_find_idx(b, c))
		i = ft_stack_size(b) - ft_find_idx(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_idx(b, c))
		i = ft_stack_size(b) - ft_find_idx(b, c);
	i = ft_find_location_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_location_a(a, c))
		i = ft_stack_size(a) - ft_find_location_a(a, c);
	i = ft_find_idx(b, c) + i;
	return (i);
}
