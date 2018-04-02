/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:39:57 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/11 23:30:22 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	char	a[n];
	int		i;

	i = -1;
	while (i++ < n)
		a[i] = i;
	while (a[0] <= 10 - n)
	{
		i = 0;
		while (i < n)
		{
			if (a[i] > 10 - n + i)
				a[i] = a[i - 1] + 1;
			ft_putchar(a[i++] + 48);
		}
		if (a[0] < 10 - n)
			ft_putchar(',');
		if (a[0] < 10 - n)
			ft_putchar(' ');
		a[n - 1]++;
		while (i-- > 0)
			if (a[i + 1] > 11 - n + i)
				a[i]++;
	}
}
