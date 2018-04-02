/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 13:46:07 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/25 21:14:38 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define SIZE 4096

int		main(int argc, char **argv)
{
	int		file;
	int		ret;
	char	c[SIZE + 1];

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc != 2)
		return (1);
	file = open(argv[1], O_RDONLY);
	while ((ret = read(file, c, SIZE)))
	{
		c[ret] = '\0';
		write(1, c, ret);
	}
	close(file);
	return (0);
}
