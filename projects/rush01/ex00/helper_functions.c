/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 14:25:57 by astrole           #+#    #+#             */
/*   Updated: 2018/01/21 23:11:48 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper_functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printpuzzle(int **p)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(p[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		**copyparams(char **v)
{
	int i;
	int j;
	int **p;

	p = (int **)malloc(sizeof(int*) * 10);
	i = 0;
	while (i < 9)
	{
		p[i] = (int*)malloc(sizeof(int) * 10);
		j = 0;
		while (j < 9)
		{
			if (v[i + 1][j] >= '0' && v[i + 1][j] <= '9')
				p[i][j] = v[i + 1][j] - '0';
			else if (v[i + 1][j] == '.')
				p[i][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (p);
}

int		ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
