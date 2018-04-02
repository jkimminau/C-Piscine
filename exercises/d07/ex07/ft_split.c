/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 00:39:11 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 12:11:57 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*malloc(size_t size);

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

int		ft_separator(char c, char *charset)
{
	int i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_wordlen(char *str, char *charset)
{
	int l;

	l = 0;
	while (*str++ && !ft_separator(*str, charset))
		l++;
	return (l + 1);
}

int		ft_countwords(char *str, char *charset)
{
	int wordc;
	int i;

	wordc = 0;
	i = 0;
	while (ft_separator(*str, charset))
		str++;
	if (*str)
		wordc++;
	while (*str)
	{
		if (ft_separator(*str, charset))
		{
			while (ft_separator(*str, charset))
				str++;
			if (*str)
				wordc++;
		}
		if (*str)
			str++;
	}
	return (wordc);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	res = (char**)malloc((ft_countwords(str, charset) + 1) * sizeof(char*));
	while (*str)
	{
		if (ft_separator(*str, charset))
			while (ft_separator(*str, charset))
				str++;
		else
		{
			j = 0;
			res[i] = (char*)malloc(ft_wordlen(str, charset) * sizeof(char));
			while (!ft_separator(*str, charset) && *str)
				res[i][j++] = *str++;
			res[i][j] = '\0';
			i++;
		}
	}
	res[i] = 0;
	return (res);
}
