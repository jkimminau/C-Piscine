/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:33:09 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/24 22:18:30 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;

	i = 1;
	if (!begin_list)
		return (0);
	list = begin_list;
	while (i < nbr)
	{
		if (!list)
			return (0);
		list = list->next;
		i++;
	}
	return (list);
}
