/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:45:34 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 22:05:15 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_getnbr_base(int nbr, char *base)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		i *= -1;
	}
	if (nbr == 0)
	{
		return 0;
	}
	if (nbr / ft_strlen(base))
		ft_getnbr_base(nbr / ft_strlen(base), base);
	return (i = (i * 10) + (nbr % ft_strlen(base)));
	//ft_putbase(nbr % ft_strlen(base), base);
}

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int s;

	num = 0;
	s = 1;
	if (*str == '-' && s > 0)
	{
		s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num += *str - '0';
		str++;
	}
	printf("%d\n",num * s);
	return (ft_getnbr_base(num * s,base));
}

int main()
{
	printf("%d\n",ft_atoi_base("900","012345678"));
	return 0;
}
