/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:18:40 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 12:19:33 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

size_t	ft_strlen(char *str)
{
	size_t s;

	s = 0;
	while (*str++)
		s++;
	return (s);
}

char	*ft_strdup(char *src)
{
	char *str;
	char *tmp;

	str = (char*)malloc(ft_strlen(src) * sizeof(char));
	tmp = str;
	while (*src)
		*str++ = *src++;
	str = tmp;
	return (str);
}
