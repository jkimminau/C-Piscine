/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 12:36:01 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/14 12:36:02 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 && i == 0)
				ft_putchar('/');
			else if ((j == 0 && i == y - 1) || (j == x - 1 && i == 0))
				ft_putchar('\\');
			else if (j == x - 1 && i == y - 1)
				ft_putchar('/');
			else if ((j == 0 || j == x - 1) ^ (i == 0 || i == y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
