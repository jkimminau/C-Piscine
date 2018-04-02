/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:19:01 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 01:25:27 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	char *tmp;

	if (!*str)
		return (1);
	tmp = str;
	while (*tmp)
	{
		if (!ft_isalpha(*tmp))
			return (0);
		tmp = tmp + 1;
	}
	return (1);
}
