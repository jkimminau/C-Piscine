/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 12:07:00 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/19 15:09:31 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_antidote(int i, int j, int k)
{
	if (i < j)
	{
		if (i > k)
			return (i);
		else
			return (j < k ? j : k);
	}
	else
	{
		if (j > k)
			return (j);
		else
			return (i < k ? i : k);
	}
	return (0);
}
