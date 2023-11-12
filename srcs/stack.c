/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:23:57 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/13 00:30:46 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_node(int data)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		ft_error_exit();
	node->data = data;
	node->next = NULL;
	return (node);
}

t_stack	*ft_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_push_back(t_stack **stack, t_stack *new_node)
{
	if (!stack)
		return ;
	if (*stack == NULL)
		*stack = new_node;
	else
		ft_last_node(*stack)->next = new_node;
}
