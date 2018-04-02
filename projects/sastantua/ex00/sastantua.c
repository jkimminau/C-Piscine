/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 23:46:55 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/14 23:17:14 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	center_line(int linenum, int level, int size)
{
	int count;
	int j;

	count = size;
	j = 0;
	while (count > level)
	{
		j += 3 + count + (count / 2);
		count--;
	}
	j += (level + 1) - linenum;
	count = 0;
	while (count < j)
	{
		ft_putchar(' ');
		count++;
	}
	ft_putchar('/');
}

void	print_final(int size, int sc)
{
	int ln;
	int ds;
	int i;
	int e;

	ln = -1;
	ds = size - 1 + (size % 2);
	while (++ln < size + 2)
	{
		center_line(ln, size, size);
		i = 0;
		e = (sc / 2 + ds / 2);
		while (i++ < sc)
			if (size >= 5 && ln == (size + 1) - ds / 2 && i == e)
				ft_putchar('$');
			else if ((i >= e - ds + 2 && i <= e + 1) && ln >= size + 2 - ds)
				ft_putchar('|');
			else
				ft_putchar('*');
		ft_putchar('\\');
		ft_putchar('\n');
		sc += 2;
	}
}

int		print_most(int size)
{
	int level;
	int linenum;
	int starcount;
	int i;

	level = 1;
	starcount = 1;
	while (level < size)
	{
		linenum = -1;
		while (++linenum < level + 2)
		{
			center_line(linenum, level, size);
			i = 0;
			while (i++ < starcount)
				ft_putchar('*');
			ft_putchar('\\');
			ft_putchar('\n');
			starcount += 2;
		}
		level++;
		starcount += 4 + 2 * ((level - 2) / 2);
	}
	return (starcount);
}

void	sastantua(int size)
{
	int starcount;

	if (size <= 0)
		return ;
	starcount = print_most(size);
	print_final(size, starcount);
}
