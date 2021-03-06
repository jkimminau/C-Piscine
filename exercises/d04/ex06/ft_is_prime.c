/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:56:44 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/13 21:02:48 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int d;

	if (nb < 2)
		return (0);
	d = 2;
	while (d < nb)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}
