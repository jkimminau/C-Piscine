/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 21:01:08 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/13 21:39:15 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		isvalid(int i, int j, int col, int *queens)
{
	if (queens[j] == i)
		return (0);
	if (queens[j] - i == col - j)
		return (0);
	if (i - queens[j] == col - j)
		return (0);
	return (1);
}

void	print_line(int *queens)
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(queens[i] + '1');
		i++;
	}
	ft_putchar('\n');
}

int		placepieces(int q, int *queens)
{
	int i;
	int j;
	int solutions;

	solutions = 0;
	if (q == 8)
	{
		solutions++;
		print_line(queens);
	}
	i = 0;
	while (i < 8)
	{
		j = 0;
		while ((j < q) && isvalid(i, j, q, queens))
			j++;
		if (j >= q)
		{
			queens[q] = i;
			solutions += placepieces(q + 1, queens);
		}
		i++;
	}
	return (solutions);
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens[8];

	placepieces(0, queens);
}
