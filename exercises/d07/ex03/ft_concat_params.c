/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:08:41 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 12:22:39 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*params;
	char	*tmp;

	i = 1;
	params = (char*)malloc(argc * sizeof(char));
	tmp = params;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			*params++ = argv[i][j++];
		}
		if (i + 1 < argc)
			*params++ = '\n';
		i++;
	}
	return (tmp);
}
