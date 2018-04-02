/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:08:59 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/13 21:38:40 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int m;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2 == 0)
	{
		m = ft_recursive_power(nb, power / 2);
		return (m * m);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
