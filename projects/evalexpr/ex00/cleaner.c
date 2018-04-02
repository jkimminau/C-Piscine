/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:28:33 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 17:35:17 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cleaner.h"

void		cleanwhitespace(char **str)
{
	char *tmp;

	tmp = *str;
	while (*tmp && *tmp == ' ')
		tmp++;
	*str = tmp;
}

void		nextwhitespace(char **str)
{
	char *tmp;

	tmp = *str;
	while (*tmp && *tmp != ' ')
		tmp++;
	*str = tmp;
}
