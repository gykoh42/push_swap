/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:52:53 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 04:07:26 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_stack_size(t_stack *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

int ft_min_data(t_stack *stack)
{
    int i;

    i = stack->data;
    while (stack)
    {
        if (stack->data < i)
            i = stack->data;
        stack = stack->next;
    }
    return (i);
}

int ft_max_data(t_stack *stack)
{
    int i;

    i = stack->data;
    while (stack)
    {
        if (stack->data > i)
            i = stack->data;
        stack = stack->next;
    }
    return (i);
}

