/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 21:02:05 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 23:37:35 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rush00(char **str, int width, int length)
{
	int i;
	int j;

	i = -1;
	while (++i < length)
	{
		j = -1;
		while (++j < width)
		{
			if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1) && str[i][j] != ' ')
				return (0);
			if ((i == 0 || i == length - 1) && (j != 0 && j != width - 1) && str[i][j] != '-')
				return (0);
			if ((j == 0 || j == width - 1) && (i != 0 && i != length - 1) && str[i][j] != '|')
				return (0);
			if ((i == 0 || i == length - 1) && (j == 0 || j == width - 1) && str[i][j] != 'o')
				return (0);
		}
	}
	return (1);
}

int		rush01(char **str, int width, int length)
{
	int i;
	int j;

	i = -1;
	while (++i < length)
	{
		j = -1;
		while (++j < width)
		{
			if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1) && str[i][j] != ' ')
				return (0);
			if (((j == 0 || j == width - 1) ^ (i == 0 || i == length - 1)) && str[i][j] != '*')
				return (0);
			if((i == 0 && j == 0) && str[i][j] != '/')
				return (0);
			if (((j == width - 1  && i == length - 1)) && str[i][j] != '/' && length > 1 && width > 1)
				return (0);
			if ((i == 0 && j == width - 1) && str[i][j] != '\\' && width > 1)
				return (0);
			if (((j == 0 && i == length - 1)) && str[i][j] != '\\' && length > 1)
				return (0);
		}
	}
	return (1);
}

int		rush02(char **str, int width, int length)
{
	int i;
	int j;

	i = -1;
	while (++i < length)
	{
		j = -1;
		while (++j < width)
		{
			if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1) && str[i][j] != ' ')
				return (0);
			if (((j == 0 || j == width - 1) ^ (i == 0 || i == length - 1)) && str[i][j] != 'B')
				return (0);
			if((i == 0 && j == 0) && str[i][j] != 'A')
				return (0);
			if (((j == width - 1  && i == length - 1)) && str[i][j] != 'C' && length > 1 && width > 1)
				return (0);
			if ((i == 0 && j == width - 1) && str[i][j] != 'A' && width > 1)
				return (0);
			if (((j == 0 && i == length - 1)) && str[i][j] != 'C' && length > 1)
				return (0);
		}
	}
	return (1);
}
int		rush03(char **str, int width, int length)
{
	int i;
	int j;

	i = -1;
	while (++i < length)
	{
		j = -1;
		while (++j < width)
		{
			if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1) && str[i][j] != ' ')
				return (0);
			if (((j == 0 || j == width - 1) ^ (i == 0 || i == length - 1)) && str[i][j] != 'B')
				return (0);
			if((i == 0 && j == 0) && str[i][j] != 'A')
				return (0);
			if (((j == width - 1  && i == length - 1)) && str[i][j] != 'C' && length > 1 && width > 1)
				return (0);
			if ((i == 0 && j == width - 1) && str[i][j] != 'C' && width > 1)
				return (0);
			if (((j == 0 && i == length - 1)) && str[i][j] != 'A' && length > 1)
				return (0);
		}
	}
	return (1);
}
int		rush04(char **str, int width, int length)
{
	int i;
	int j;

	i = -1;
	while (++i < length)
	{
		j = -1;
		while (++j < width)
		{
			if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1) && str[i][j] != ' ')
				return (0);
			if (((j == 0 || j == width - 1) ^ (i == 0 || i == length - 1)) && str[i][j] != 'B')
				return (0);
			if((i == 0 && j == 0) && str[i][j] != 'A')
				return (0);
			if (((j == width - 1  && i == length - 1)) && str[i][j] != 'A' && length > 1 && width > 1)
				return (0);
			if ((i == 0 && j == width - 1) && str[i][j] != 'C' && width > 1)
				return (0);
			if (((j == 0 && i == length - 1)) && str[i][j] != 'C' && length > 1)
				return (0);
		}
	}
	return (1);
}
