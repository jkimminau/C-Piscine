/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 18:09:55 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 17:24:30 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_oplink
{
	struct s_oplink	*next;
	int				num;
	char			op;
}					t_oplink;

void				ft_putchar(char c);
void				ft_putnbr(int n);
t_oplink			*oplink_create_new(char *str);
t_oplink			*oplink_create_int(int n);
int					operate(int a, int b, char c);
void				clearwhitespace(char **str);

#endif
