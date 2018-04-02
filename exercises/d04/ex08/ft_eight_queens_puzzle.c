/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 21:02:28 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/13 21:02:31 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		placepieces(int currentqueen, int *queens)
{
	int i;
	int j;
	int solutions;

	solutions = 0;
	if (currentqueen == 8)
		solutions++;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while ((j < currentqueen) && isvalid(i, j, currentqueen, queens))
			j++;
		if (j < currentqueen)
			i++;
		else
		{
			queens[currentqueen] = i;
			solutions += placepieces(currentqueen + 1, queens);
			i++;
		}
	}
	return (solutions);
}

int		ft_eight_queens_puzzle(void)
{
	int queens[8];

	return (placepieces(0, queens));
}
