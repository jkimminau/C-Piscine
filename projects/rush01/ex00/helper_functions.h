/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 14:26:10 by astrole           #+#    #+#             */
/*   Updated: 2018/01/21 23:13:33 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	printpuzzle(int **p);
int		**copyparams(char **v);
int		ft_error();
int		ft_strlen(char *str);
#endif
