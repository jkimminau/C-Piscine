/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 18:12:09 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 18:20:36 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	unsigned int num;

	if (n < 0)
	{
		ft_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num / 10 > 0)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}

t_oplink	*oplink_create_new(char *str)
{
	t_oplink	*new;
	int			sign;

	new = malloc(sizeof(t_oplink));
	sign = 1;
	new->op = '\0';
	new->num = 0;
	if (*str == '+' || *str == '*' || *str == '/'
			|| *str == '%' || (*str == '-' && *(str + 1) == ' '))
	{
		new->op = *str;
	}
	else
	{
		if (*str == '-')
		{
			str++;
			sign = -1;
		}
		while (*str >= '0' && *str <= '9')
			new->num = (new->num * 10) + (*str++ - '0');
		new->num *= sign;
	}
	new->next = 0;
	return (new);
}

t_oplink	*oplink_create_int(int n)
{
	t_oplink *new;

	new = malloc(sizeof(t_oplink));
	new->op = '\0';
	new->num = n;
	new->next = 0;
	return (new);
}

int			operate(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
		return (a * b);
	if (c == '/')
		return (a / b);
	if (c == '%')
		return (a % b);
	return (-1);
}
