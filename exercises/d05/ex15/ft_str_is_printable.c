/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:38:15 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 15:49:14 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	char *tmp;

	if (!*str)
		return (1);
	tmp = str;
	while (*tmp)
	{
		if (!ft_isprintable(*tmp))
			return (0);
		tmp = tmp + 1;
	}
	return (1);
}
