/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 23:30:27 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/17 01:33:34 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	if (*s1 != *s2)
		return (*s1 - *s2)
	return (0);
}

void	ft_sortargv(int argc, char *argv[])
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while(i < argc)
	{
		j = 0;
		while(j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int 	main(int argc, char **argv)
{
	int i;
	int j;

	ft_sortargv(argc,argv);

	i = 0;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
			ft_putchar('argv[i][j++]);
		i++;
	}
	return 0;
}
