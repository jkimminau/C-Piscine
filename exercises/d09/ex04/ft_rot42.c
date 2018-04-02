/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:48:40 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/19 15:31:33 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_islower(char c, int i)
{
	if (c + 16 > 'z')
	{
		i = (c + 16) - 'z';
		c = i + 'a' - 1;
	}
	else
		c = c + 16;
	return (c);
}

char	*ft_rot42(char *str)
{
	char i;
	char *tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = ft_islower(*str, i);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (*str + 16 > 'Z')
			{
				i = (*str + 16) - 'Z';
				*str = i + 'A' - 1;
			}
			else
				*str = *str + 16;
		}
		str++;
	}
	return (tmp);
}
