/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:06:09 by gykoh             #+#    #+#             */
/*   Updated: 2023/11/11 16:17:25 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	size_t	rtn;
	int		sign;
	size_t	i;

	rtn = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtn = rtn * 10 + (str[i] - '0');
		i++;
	}
	return (rtn * sign);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (n == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (0);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_free(char **rtn)
{
	size_t	i;

	i = 0;
	while (rtn[i])
	{
		free(rtn[i]);
		i++;
	}
	free(rtn);
	return (0);
}

size_t	ft_word_cnt(char const *s, char c)
{
	size_t	word_cnt;
	size_t	i;

	i = 0;
	word_cnt = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			word_cnt++;
		i++;
	}
	return (word_cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	size_t	i;
	size_t	tmp;
	size_t	save;

	i = 0;
	tmp = 0;
	rtn = (char **)malloc(sizeof(char *) * (ft_word_cnt(s, c) + 1));
	if (!rtn)
		return (0);
	while (i < ft_word_cnt(s, c) && s[tmp] != '\0')
	{
		while (s[tmp] == c)
			tmp++;
		save = tmp;
		while (s[tmp] != c && s[tmp] != '\0')
			tmp++;
		rtn[i] = ft_strndup(&s[save], tmp - save);
		if (rtn[i++] == 0)
			return (ft_free(rtn));
	}
	rtn[i] = NULL;
	return (rtn);
}
