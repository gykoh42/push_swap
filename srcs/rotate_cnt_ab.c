/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cnt_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:47:53 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 05:09:45 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_location_b(b, c);
	if (i < ft_find_idx(a, c))
		i = ft_find_idx(a, c);
	return (i);
}

int	ft_case_rrarrb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_location_b(b, c))
		i = ft_stack_size(b) - ft_find_location_b(b, c);
	if ((i < (ft_stack_size(a) - ft_find_idx(a, c))) && ft_find_idx(a, c))
		i = ft_stack_size(a) - ft_find_idx(a, c);
	return (i);
}

int	ft_case_rrarb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_idx(a, c))
		i = ft_stack_size(a) - ft_find_idx(a, c);
	i = ft_find_location_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_location_b(b, c))
		i = ft_stack_size(b) - ft_find_location_b(b, c);
	i = ft_find_idx(a, c) + i;
	return (i);
}
