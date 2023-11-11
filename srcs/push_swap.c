/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:52:51 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 16:55:44 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_parse_argv(argc, argv);
	if (!a || !ft_check_dup(a))
	{
		ft_free_stack(&a);
		ft_error_exit();
	}
	if (!ft_is_sorted(a))
		ft_sort(&a);
	ft_free_stack(&a);
	return (0);
}
