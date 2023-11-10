/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:12:23 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 04:05:32 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_space(int c)
{
    if (c == ' ')
        return (1);
    return (0);
}

int ft_is_digit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_is_sign(int c)
{
    if (c == '+' || c == '-')
        return (1);
    return (0);
}

int ft_check_argv_factor(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_is_space(argv[i][j]) && !ft_is_digit(argv[i][j]) && !ft_is_sign(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_argv_format(char **argv)
{
    int i;
    int j;

    i = 0;
	while (argv[++i])
	{
		j = -1;
		while ((argv[i][++j] != '\0'))
		{
			if (ft_is_sign(argv[i][j]))
			{
				if (!ft_is_digit(argv[i][++j]))
					return (0);
			}
			else if (ft_is_digit(argv[i][j]))
			{
				if (argv[i][++j] == '\0')
					break ;
				if (!ft_is_digit(argv[i][j]) && !ft_is_space(argv[i][j]))
					return (0);
			}
		}
	}
	return (1);
}