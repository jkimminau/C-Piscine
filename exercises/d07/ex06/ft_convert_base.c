/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 20:33:06 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 13:51:10 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*malloc(size_t size);
void			free(void *ptr);

int				ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

int				ft_getnum(char d, char *b)
{
	int i;

	i = 0;
	while (*b)
	{
		if (d == *b++)
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	ft_todecimal(char *n, char *base)
{
	unsigned int num;

	num = 0;
	if (*n == '+')
		n++;
	while (ft_getnum(*n, base) != -1)
	{
		num = (num * ft_strlen(base)) + ft_getnum(*n, base);
		n++;
	}
	return (num);
}

char			*ft_tobase(unsigned int num, char *base, char *str)
{
	char *tmp;

	tmp = str;
	if (num / ft_strlen(base))
		tmp = ft_tobase(num / ft_strlen(base), base, tmp);
	*tmp++ = base[num % ft_strlen(base)];
	return (tmp);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	num;
	char			*str;
	char			*tmp;
	char			*tmp2;
	char			s;

	s = '\0';
	if (*nbr == '-')
		s = *nbr++;
	tmp = (char*)malloc(256 * sizeof(char));
	num = ft_todecimal(nbr, base_from);
	ft_tobase(num, base_to, tmp);
	str = (char*)malloc(ft_strlen(tmp) + ft_strlen(&s) * sizeof(char));
	if (s == '-')
	{
		*str = s;
		tmp2 = str + 1;
	}
	else
		tmp2 = str;
	while (*tmp)
	{
		*tmp2++ = *tmp++;
	}
	return (str);
}
