/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 09:53:52 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 12:17:27 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
			void *data_ref, int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		if ((*cmpf)(root->item, data_ref) == 0)
			return (root);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
	}
	return (0);
}
