/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:41:53 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/13 21:02:38 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int d;
	int nprime;

	if (nb < 2)
		return (2);
	nprime = 1;
	while (nprime != 0)
	{
		d = 2;
		nprime = 0;
		while (d < nb)
		{
			if (nb % d == 0)
				nprime = 1;
			d++;
		}
		if (nprime == 0)
			return (nb);
		nb++;
	}
	return (0);
}
