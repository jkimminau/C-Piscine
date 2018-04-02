/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:32:25 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/25 23:23:56 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define SIZE 245760

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_errno(char *prog, char *arg)
{
	if (errno == EACCES)
	{
		putstr(prog);
		putstr(": ");
		putstr(arg);
		putstr(": Permission Denied\n");
	}
	else if (errno == EISDIR)
	{
		putstr(prog);
		putstr(": ");
		putstr(arg);
		putstr(": Is a directory\n");
	}
	else
	{
		putstr(prog);
		putstr(": ");
		putstr(arg);
		putstr(": No such file or directory\n");
	}
}

void	catmode(void)
{
	int		ret;
	char	buf[SIZE + 1];

	while ((ret = read(0, buf, SIZE)))
	{
		buf[ret] = '\0';
		putstr(buf);
	}
}

void	display_file(char *filenm, char *prog)
{
	int		i;
	int		file;
	int		ret;
	char	c[SIZE + 1];

	i = 1;
	errno = 0;
	file = open(filenm, O_RDWR);
	if (file == -1)
	{
		if (filenm[0] == '-' && filenm[1] == '\0')
			catmode();
		else
			ft_errno(prog, filenm);
	}
	else
	{
		while ((ret = read(file, c, SIZE)))
		{
			c[ret] = '\0';
			putstr(c);
		}
		close(file);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
		display_file(argv[i], argv[0]);
	return (0);
}
