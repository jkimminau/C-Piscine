/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:36:55 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/16 15:03:10 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	tmp = dest;
	i = 1;
	while ((*dest++ = *src++) && i++ < n)
		;
	if (i++ < n)
		*dest++ = '\0';
	return (tmp);
}
