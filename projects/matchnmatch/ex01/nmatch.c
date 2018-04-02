/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 13:03:05 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/24 18:02:55 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	int count;

	count = 0;
	if (*s2 == '*')
	{
		s2++;
		while (*s1)
			count += nmatch(s1++, s2);
		count += nmatch(s1++, s2);
	}
	else if (*s1 == *s2 && *s1)
		count += nmatch(s1 + 1, s2 + 1);
	else if (!*s1 && !*s2)
		return (1);
	else
		return (0);
	return (count);
}
