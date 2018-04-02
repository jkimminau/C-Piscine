/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:34:26 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 00:53:18 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);

int		*ft_range(int min, int max)
{
	int *list;
	int i;
	int size;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	list = (int*)malloc((size) * sizeof(int));
	while (min < max)
	{
		list[i] = min;
		i++;
		min++;
	}
	i = 0;
	return (list);
}
