/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:09:40 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 20:39:58 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-214748);
		ft_putnbr(3648);
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
