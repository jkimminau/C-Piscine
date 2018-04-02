/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:47:07 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 15:13:25 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*str == '\0')
		return (0);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		str = str + 1;
	}
	return (0);
}
