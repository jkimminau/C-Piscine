/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 02:29:23 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 16:37:50 by jkimmina         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	char			*d;
	char			*s;
	unsigned int	j;
	unsigned int	destl;

	j = nb;
	d = dest;
	s = src;
	if (j == 0)
		return (ft_strlen(d) - 1);
	while (*d != '\0' && j-- != 0)
		d++;
	destl = d - dest;
	j = nb - destl;
	if (j == 0)
		return (ft_strlen(dest) + ft_strlen(src) - 1);
	while (*s != '\0' && j-- != 1)
		*d++ = *s++;
	while (*s)
		s++;
	*d = '\0';
	return (destl + ft_strlen(src));
}
