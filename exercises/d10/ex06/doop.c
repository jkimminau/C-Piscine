/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:29:04 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/23 21:42:46 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char c;

	if (num / 10 > 0)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int		tonum(char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - '0');
	return (num * sign);
}

void	doop(char *a1, char *op, char *a2)
{
	if	(*op == '+')
		ft_putnbr(tonum(a1) + tonum(a2));
	else if	(*op == '-')
		ft_putnbr(tonum(a1) - tonum(a2));
	else if	(*op == '*')
		ft_putnbr(tonum(a1) * tonum(a2));
	else if	(*op == '/' && tonum(a2) != 0)
		ft_putnbr(tonum(a1) + tonum(a2));
	else if	(*op == '/' && tonum(a2) == 0)
		write(1, "Stop : division by zero", 23);
	else if (*op == '%' && tonum(a2) != 0)
		ft_putnbr(tonum(a1) + tonum(a2));
	else if	(*op == '%' && tonum(a2) == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
	if	(argc == 4)
	{
		doop(argv[1], argv[2], argv[3]);
		write(1, "\n", 1);
	}
	return (0);
}
