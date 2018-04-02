/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:30:55 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 01:34:02 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	char *tmp;

	if (!*str)
		return (1);
	tmp = str;
	while (*tmp)
	{
		if (!ft_islower(*tmp))
			return (0);
		tmp = tmp + 1;
	}
	return (1);
}
