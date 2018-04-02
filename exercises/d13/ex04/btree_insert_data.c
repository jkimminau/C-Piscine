/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 22:39:57 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 12:16:55 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	t_btree *tmp;

	tmp = *root;
	if (!tmp || !root)
		*root = btree_create_node(item);
	else
	{
		if ((*cmpf)(item, tmp->item) >= 0)
		{
			if (tmp->right)
				btree_insert_data(&tmp->right, item, cmpf);
			else
				tmp->right = btree_create_node(item);
		}
		else
		{
			if (tmp->left)
				btree_insert_data(&tmp->left, item, cmpf);
			else
				tmp->left = btree_create_node(item);
		}
	}
}
