/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:21:18 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 01:08:30 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

int		ft_countwords(char *str)
{
	int wordc;

	wordc = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str = str + 1;
	if (*str)
		wordc = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			while (*str == ' ' || *str == '\t' || *str == '\n')
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
		if (*str == ' ' || *str == '\t' || *str == '\n')
			while (*str == ' ' || *str == '\t' || *str == '\n')
				str = str + 1;
		else
		{
			j = 0;
			list[i] = (char*)malloc(256 * sizeof(char));
			while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
				list[i][j++] = *str++;
			list[i][j] = '\0';
			i++;
		}
	}
	list[i] = 0;
	return (list);
}
