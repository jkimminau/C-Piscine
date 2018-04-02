/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:21:18 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 20:33:34 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

int		ft_iswhite(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_countwords(char *str)
{
	int wordc;

	wordc = 0;
	while (ft_iswhite(*str))
		str = str + 1;
	if (*str)
		wordc = 1;
	while (*str)
	{
		if (ft_iswhite(*str))
		{
			while (ft_iswhite(*str))
				str++;
			if (*str)
				wordc++;
		}
		if (*str)
			str++;
	}
	return (wordc);
}

char	**ft_split_whitespaces(char *str)
{
	char	**list;
	int		i;
	int		j;

	i = 0;
	list = (char**)malloc(ft_countwords(str) * sizeof(char*));
	while (*str)
	{
		if (ft_iswhite(*str))
			while (ft_iswhite(*str))
				str = str + 1;
		else
		{
			j = 0;
			list[i] = (char*)malloc(256 * sizeof(char));
			while (!ft_iswhite(*str))
				list[i][j++] = *str++;
			list[i][j] = '\0';
			i++;
		}
	}
	list[i] = 0;
	return (list);
}
