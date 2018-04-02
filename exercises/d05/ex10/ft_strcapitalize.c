/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 00:58:34 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 17:00:30 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isletterornum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp != ' ' && *tmp != '\t')
		{
			if (*tmp >= 'a' && *tmp <= 'z')
				*tmp = *tmp - 'a' + 'A';
			tmp = tmp + 1;
			while (ft_isletterornum(*tmp) && *tmp != 0)
			{
				if (*tmp >= 'A' && *tmp <= 'Z')
					*tmp = *tmp - 'A' + 'a';
				tmp = tmp + 1;
			}
		}
		if (*tmp)
			tmp = tmp + 1;
	}
	return (str);
}
