/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 12:19:31 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/19 15:32:58 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != 0)
	{
		j = 0;
		while (factory[i][j] != '\0')
			free(factory[i][j++]);
		free(factory[i]);
		i++;
	}
	free(factory);
	return ;
}
