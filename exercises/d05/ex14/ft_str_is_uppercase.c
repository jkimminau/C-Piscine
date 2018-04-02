/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:35:18 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 15:35:29 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	char *tmp;

	if (!*str)
		return (1);
	tmp = str;
	while (*tmp)
	{
		if (!ft_isupper(*tmp))
			return (0);
		tmp = tmp + 1;
	}
	return (1);
}
