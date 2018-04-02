/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:22:24 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/17 23:53:38 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putbase(int c, char *base)
{
	ft_putchar(base[c]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('8');
		while (i++ < 7)
			ft_putchar('0');
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nbr / ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putbase(nbr % ft_strlen(base), base);
}
