/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:26:11 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 01:30:23 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	char *tmp;

	if (!*str)
		return (1);
	tmp = str;
	while (*tmp)
	{
		if (!ft_isnum(*tmp))
			return (0);
		tmp = tmp + 1;
	}
	return (1);
}
