/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:50:42 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 23:54:11 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_btoa(t_stack *a, t_stack *b)
{
	int		min_ops;
	int		current_ops;
	t_stack	*tmp;

	tmp = b;
	min_ops = 2147483647;
	while (tmp)
	{
		current_ops = ft_cnt_rarb_a(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rrarrb_a(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rarrb_a(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rrarb_a(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		tmp = tmp->next;
	}
	return (min_ops);
}

int	ft_rotate_type_atob(t_stack *a, t_stack *b)
{
	int		min_ops;
	int		current_ops;
	t_stack	*tmp;

	tmp = a;
	min_ops = 2147483647;
	while (tmp)
	{
		current_ops = ft_cnt_rarb_b(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rrarrb_b(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rarrb_b(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		current_ops = ft_cnt_rrarb_b(a, b, tmp->data);
		if (min_ops > current_ops)
			min_ops = current_ops;
		tmp = tmp->next;
	}
	return (min_ops);
}
