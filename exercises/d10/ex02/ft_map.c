/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 13:37:45 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/23 14:50:33 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	arr = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
	{
		arr[i] = (*f)(tab[i]);
	}
	return (arr);
}
