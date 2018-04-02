/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:23:02 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/12 16:44:02 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		s;
	char	tmp[200];
	char	*p;

	i = 0;
	s = 0;
	while (*(str + i) != '\0')
		i++;
	s = i;
	i = 0;
	while (i < s)
	{
		tmp[i] = *(str + s - i - 1);
		i++;
	}
	p = tmp;
	i = 0;
	while (i < s)
	{
		*(p + i) = tmp[i];
		i++;
	}
	return (p);
}
