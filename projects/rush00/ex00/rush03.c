/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 12:36:13 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/14 12:36:14 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 && (i == 0 || i == y - 1))
				ft_putchar('A');
			else if (j == x - 1 && (i == 0 || i == y - 1))
				ft_putchar('C');
			else if ((j == 0 || j == x - 1) ^ (i == 0 || i == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
