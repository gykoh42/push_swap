/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:42:43 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 20:43:33 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_do_rarb_a(t_stack **a, t_stack **b, int data) 
{   
    int location_b;

    location_b = ft_find_location_b(*b, data);
    while ((*a)->data != data && location_b > 0)
    {
        ft_rr(a, b);
        location_b--;
    }
    while ((*a)->data != data)
        ft_ra(a);
    while (location_b > 0)
    {
        ft_rb(b);
        location_b--;
    }
    ft_pb(a, b);
    return (-1);
}

int ft_do_rrarrb_a(t_stack **a, t_stack **b, int data) 
{
    while ((*a)->data != data && ft_find_location_b(*b, data) > 0)
        ft_rrr(a, b);
    while ((*a)->data != data)
        ft_rra(a);
    while (ft_find_location_b(*b, data) > 0)
        ft_rrb(b);
    ft_pb(a, b);
    return (-1);
}

int ft_do_rrarb_a(t_stack **a, t_stack **b, int data) {
    while ((*a)->data != data)
        ft_rra(a);
    while (ft_find_location_b(*b, data) > 0)
        ft_rb(b);
    ft_pb(a, b);
    return (-1);
}

int ft_do_rarrb_a(t_stack **a, t_stack **b, int data) {
    while ((*a)->data != data)
        ft_ra(a);
    while (ft_find_location_b(*b, data) > 0)
        ft_rrb(b);
    ft_pb(a, b);
    return (-1);
}
