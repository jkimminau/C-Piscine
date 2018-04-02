/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 12:35:35 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/19 15:46:06 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_cleanstring(char *str)
{
	char *tmp;

	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	if (*str)
		tmp = str;
	while (*str && *str != ' ' && *str != '\t')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		str++;
	}
	if (*str && (*str == ' ' || *str == '\t'))
		*str = '\0';
	return (tmp);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 || !*s2)
		return (-1);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (-1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ft_cleanstring(argv[i]);
		if (ft_strcmp(tmp, "president") == 0 ||
				ft_strcmp(tmp, "attack") == 0 || ft_strcmp(tmp, "bauer") == 0)
			ft_putstr("Alert!!!\n");
		i++;
	}
	return (0);
}
