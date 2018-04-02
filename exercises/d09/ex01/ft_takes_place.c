/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:30:17 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/19 15:08:30 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	char	ampm;
	char	ampm2;
	int		hour2;

	if (hour > 24 || hour < 1)
		return ;
	if (hour > 11 && hour < 24)
		ampm = 'P';
	else
		ampm = 'A';
	if (hour > 10 && hour < 23)
		ampm2 = 'P';
	else
		ampm2 = 'A';
	if (hour % 12 > 0)
		hour2 = (hour % 12) + 1;
	else
		hour2 = 1;
	if (hour % 12 > 0)
		hour = hour % 12;
	else
		hour = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, ampm, hour2, ampm2);
}
