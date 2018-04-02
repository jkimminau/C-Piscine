/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:59:16 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/21 23:19:01 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper_functions.h"

int		isvalid(int **p, int x, int y, int val)
{
	int i;
	int sqr;

	sqr = ((y / 3) * 3) + (x / 3);
	i = 0;
	while (i < 9)
	{
		if (i != y && p[i][x] == val)
			return (0);
		if (i != x && p[y][i] == val)
			return (0);
		if (p[(sqr / 3) * 3 + (i / 3)][(sqr % 3) * 3 + (i % 3)] == val &&
				((sqr / 3) * 3 + (i / 3) != y && (sqr % 3) * 3 + (i % 3) != x))
			return (0);
		i++;
	}
	return (1);
}

int		isfull(int **p)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (p[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		**solve(int **p)
{
	int i;
	int j;
	int val;

	val = 0;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			if (p[i][j] == 0)
			{
				while (!isfull(p) && ++val < 10)
					if (isvalid(p, j, i, val))
					{
						p[i][j] = val;
						solve(p);
					}
				if (isfull(p))
					return (p);
				p[i][j] = 0;
			}
	}
	return (p);
}

int		main(int argc, char **argv)
{
	int **puzzle;
	int i;
	int j;

	if (argc != 10)
		return (ft_error());
	puzzle = copyparams(argv);
	if (puzzle == 0)
		return (ft_error());
	i = -1;
	while (++i < 9)
	{
		j = -1;
		if (ft_strlen(argv[i + 1]) > 9)
			return (ft_error());
		while (++j < 9)
			if (!isvalid(puzzle, j, i, puzzle[i][j]) && puzzle[i][j] != 0)
				return (ft_error());
	}
	puzzle = solve(puzzle);
	printpuzzle(puzzle);
	free(puzzle);
	return (0);
}
