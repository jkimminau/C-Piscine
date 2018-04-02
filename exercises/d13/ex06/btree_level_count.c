/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:07:48 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 12:18:03 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int count;

	count = 1;
	if (root)
	{
		if (root->left)
			count = (count + btree_level_count(root->left));
		if (root->right)
			if (btree_level_count(root->right) > count)
				count = (count + btree_level_count(root->right));
	}
	return (count);
}
