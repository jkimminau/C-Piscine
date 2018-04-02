/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:45:17 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/24 17:20:50 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (begin_list)
	{
		tmp = begin_list;
		count++;
		while (tmp->next)
		{
			count++;
			tmp = tmp->next;
		}
	}
	return (count);
}
