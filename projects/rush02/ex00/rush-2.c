/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 13:21:23 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 23:37:16 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "valid.h"

char	**readInput(char *str)
{
	char **ret;
	char *tmp;
	int width;
	int l;
	int i;

	tmp = str;
	l = 0;
	width = 0;
	while(*tmp != '\n' && *tmp)
	{
		width++;
		tmp++;
	}
	while(*tmp != '\0')
		if(*tmp++ == '\n')
			l++;
	ret = (char**)malloc(sizeof(char*) * (l + 1));
	l = 0;
	while(*str)
	{
		ret[l] = (char*)malloc(sizeof(char) * (width + 1));
		i = 0;
		while (*str != '\n' && *str)
			ret[l][i++] = *str++;
		ret[l++][i] = '\0';
		if (*str)
			str++;	
	}
	ret[l] = 0;
	return (ret);
}

int		getwidth(char **str)
{
	int i;
	
	i = 0;
	while (str[0][i] != '\0')
		i++;
	return (i);
}

int		getlength(char **str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	rushcheck(char **str, int width, int length)
{
	int count;

	count = 0;
	count += rush00(str, width, length);
	count += rush01(str, width, length);
	count += rush02(str, width, length);
	count += rush03(str, width, length);
	count += rush04(str, width, length);
	if(rush00(str,width,length))
	{
		//printf("[rush-00] [%i] [%i]", width, length);
		if (count > 0)
		{
			count--;
			//printf(" || ");
		}
	}
	if(rush01(str,width,length))
	{
		//printf("[rush-01] [%i] [%i]", width, length);
		if (count > 0)
		{
			count--;
			//printf(" || ");
		}
	}
	if(rush02(str,width,length))
	{
		//printf("[rush-02] [%i] [%i]", width, length);
		if (count > 0)
		{
			count--;
			//printf(" || ");
		}
	}
	if(rush03(str,width,length))
	{
		//printf("[rush-03] [%i] [%i]", width, length);
		if (count > 0)
		{
			count--;
			//printf(" || ");
		}
	}
	if(rush04(str,width,length))
	{
		//printf("[rush-04] [%i] [%i]", width, length);
		if (count > 0)
		{
			count--;
			//printf(" || ");
		}
	}
}

int		main(int argc, char **argv)
{
	char **str;
	char buf[2048];
	int width;
	int length;

	argc = 0;
	(void)argv;
	read(0, buf, 2047);
	str = readInput(buf);
	width = getwidth(str);
	length = getlength(str);
	rushcheck(str,width,length);
	free(str);
	return (0);
}
