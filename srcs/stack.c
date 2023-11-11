/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:23:57 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 04:07:29 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_new_stack(int data)
{
    t_stack *stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    if (!stack)
        ft_error_exit();
    stack->data = data;
    stack->next = NULL;
    return (stack);
}

t_stack *ft_last_node(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

void    ft_push_back(t_stack **stack, t_stack *new_node)
{
    if (!stack)
        return ;
    if (*stack == NULL)
        *stack = new_node;
    else
        (ft_last_node(*stack))->next = new_node;
}
