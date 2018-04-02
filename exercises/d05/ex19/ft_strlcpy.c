/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 19:53:28 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 20:53:45 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*tmp;

	tmp = src;
	i = 1;
	if (size == 0)
		return (ft_strlen(tmp));
	while ((*dest++ = *src++) && i++ < size - 1)
		;
	*dest = '\0';
	return (ft_strlen(tmp));
}
