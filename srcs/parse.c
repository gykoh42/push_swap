/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:36:01 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/13 00:26:27 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_split(char *str, t_stack **stack)
{
	int		i;
	long	data;
	char	**split_str;

	split_str = ft_split(str, ' ');
	i = -1;
	if (!split_str)
	{
		ft_free_stack(stack);
		ft_error_exit();
	}
	while (split_str[++i])
	{
		data = ft_atoi(split_str[i]);
		if (data > 2147483647 || data < -2147483648)
		{
			ft_free_str(split_str);
			ft_free_stack(stack);
			ft_error_exit();
		}
		ft_push_back(stack, ft_new_node(data));
	}
	ft_free_str(split_str);
}

void	ft_process_argv(int argc, char **argv, t_stack **stack)
{
	int	i;

	i = 1;
	if (argc < 2)
		exit(0);
	while (i < argc)
	{
		ft_check_split(argv[i], stack);
		i++;
	}
}

int	ft_check_dup(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->data == tmp->data)
				return (0);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (1);
}

t_stack	*ft_parse_argv(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (ft_check_argv_factor(argv) == 0 || ft_check_argv_format(argv) == 0)
	{
		ft_free_stack(&stack);
		ft_error_exit();
	}
	ft_process_argv(argc, argv, &stack);
	if (!stack || !ft_check_dup(stack))
	{
		ft_free_stack(&stack);
		ft_error_exit();
	}
	return (stack);
}
