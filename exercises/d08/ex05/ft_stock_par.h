/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 21:04:20 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/18 21:48:44 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H__
#define __FT_STOCK_PAR_H__

typedef struct s_stock_par
{
	int size_params;
	char *str;
	char *copy;
	char **tab;
}		t_stock_par;

#endif
