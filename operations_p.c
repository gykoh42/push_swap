/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:43:11 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/10 12:59:30 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*b)
        return ;
    tmp = *a;
    *a = *b;
    *b = (*b)->next;
    (*a)->next = tmp;
    write(1, "pa\n", 3);
}

void    ft_pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*a)
        return ;
    tmp = *b;
    *b = *a;
    *a = (*a)->next;
    (*b)->next = tmp;
    write(1, "pb\n", 3);
}
