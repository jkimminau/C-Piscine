/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:51:42 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/25 13:45:02 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *new;
	t_list *tmp;

	tmp = 0;
	if (ac > 1)
	{
		new = ft_create_elem(av[--ac]);
		tmp = new;
		ac--;
		while (ac > 0)
		{
			new->next = ft_create_elem(av[ac--]);
			new = new->next;
		}
	}
	return (tmp);
}
