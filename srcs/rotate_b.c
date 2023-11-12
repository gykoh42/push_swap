/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:42:48 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/12 20:44:10 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_do_rarb_b(t_stack **a, t_stack **b, int data) 
{
    int location_a;

    location_a = ft_find_location_a(*a, data);
    while ((*b)->data != data && location_a > 0)
    {
        ft_rr(a, b);
        location_a--;
    }
    while ((*b)->data != data)
        ft_rb(b);
    while (location_a > 0)
    {
        ft_ra(a);
        location_a--;
    }
    ft_pa(a, b);
    return (-1);
}

int ft_do_rrarrb_b(t_stack **a, t_stack **b, int data) 
{
    while ((*b)->data != data && ft_find_location_a(*a, data) > 0)
        ft_rrr(a, b);
    while ((*b)->data != data)
        ft_rrb(b);
    while (ft_find_location_a(*a, data) > 0)
        ft_rra(a);
    ft_pa(a, b);
    return (-1);
}

int ft_do_rrarb_b(t_stack **a, t_stack **b, int data) {
    while (ft_find_location_a(*a, data) > 0)
        ft_rra(a);
    while ((*b)->data != data)
        ft_rb(b);
    ft_pa(a, b);
    return (-1);
}

int ft_do_rarrb_b(t_stack **a, t_stack **b, int data) {
    while (ft_find_location_a(*a, data) > 0)
        ft_ra(a);
    while ((*b)->data != data)
        ft_rrb(b);
    ft_pa(a, b);
    return (-1);
}
