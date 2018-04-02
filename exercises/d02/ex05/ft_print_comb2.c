/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 18:14:23 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/11 22:37:44 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	char a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			ft_putchar((a[0] / 10) + 48);
			ft_putchar((a[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((a[1] / 10) + 48);
			ft_putchar((a[1] % 10) + 48);
			if (a[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			a[1]++;
		}
		a[0]++;
	}
}
