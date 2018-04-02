/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:50:23 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 20:55:33 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

int		ft_ultimate_range(int **range, int min, int max)
{
	int *list;
	int i;
	int mintmp;

	mintmp = min;
	*range = 0;
	if (min >= max)
		return (0);
	i = 0;
	list = (int*)malloc((max - min) * sizeof(int));
	while (mintmp < max)
	{
		list[i] = mintmp;
		i++;
		mintmp++;
	}
	*range = list;
	return (max - min);
}
