/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:50:42 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 04:07:11 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_btoa(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->data);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->data))
			i = ft_case_rarb_a(a, b, tmp->data);
		if (i > ft_case_rrarrb_a(a, b, tmp->data))
			i = ft_case_rrarrb_a(a, b, tmp->data);
		if (i > ft_case_rarrb_a(a, b, tmp->data))
			i = ft_case_rarrb_a(a, b, tmp->data);
		if (i > ft_case_rrarb_a(a, b, tmp->data))
			i = ft_case_rrarb_a(a, b, tmp->data);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_atob(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb_b(a, b, a->data);
	while (tmp)
	{
		if (i > ft_case_rarb_b(a, b, tmp->data))
			i = ft_case_rarb_b(a, b, tmp->data);
		if (i > ft_case_rrarrb_b(a, b, tmp->data))
			i = ft_case_rrarrb_b(a, b, tmp->data);
		if (i > ft_case_rarrb_b(a, b, tmp->data))
			i = ft_case_rarrb_b(a, b, tmp->data);
		if (i > ft_case_rrarb_b(a, b, tmp->data))
			i = ft_case_rrarb_b(a, b, tmp->data);
		tmp = tmp->next;
	}
	return (i);
}