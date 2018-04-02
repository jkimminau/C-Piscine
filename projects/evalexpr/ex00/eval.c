/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 17:48:00 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/28 18:51:26 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"
#include "cleaner.h"
#include <stdio.h>

void	printlist(t_oplink *list)
{
	while (list != 0)
	{
		if (list->op == '\0')
			printf("list->num = %d\n", list->num);
		else
			printf("list->op = %c\n", list->op);
		list = list->next;
	}
}

int		evaluate(t_oplink *list)
{
	t_oplink *begin;

	begin = list;
	while (list->next)
	{
		if (list->next->op == '*' ||
				list->next->op == '/' || list->next->op == '%')
		{
			list->num = operate(list->num,
					list->next->next->num, list->next->op);
			list->next = list->next->next->next;
		}
		else
			list = list->next->next;
	}
	list = begin;
	while (list->next)
	{
		list->num = operate(list->num, list->next->next->num, list->next->op);
		list->next = list->next->next->next;
	}
	return (begin->num);
}

int		eval_recurse(char **str)
{
	char		*tmp;
	t_oplink	*list;
	t_oplink	*begin;

	tmp = ++*str;
	cleanwhitespace(&tmp);
	if (*tmp != '(')
		list = oplink_create_new(tmp);
	else
		list = oplink_create_int(eval_recurse(&tmp));
	begin = list;
	nextwhitespace(&tmp);
	while (*tmp && *tmp != ')')
	{
		cleanwhitespace(&tmp);
		if (*tmp && *tmp == '(')
			list->next = oplink_create_int(eval_recurse(&tmp));
		else if (*tmp && *tmp != ')')
			list->next = oplink_create_new(tmp);
		list = list->next;
		while (*tmp && !(*tmp == ' ' || *tmp == ')'))
			tmp++;
	}
	*str = ++tmp;
	return (evaluate(begin));
}

int		eval_expr(char *str)
{
	t_oplink *list;
	t_oplink *begin;

	if (!str)
		return (0);
	cleanwhitespace(&str);
	if (*str != '(')
		list = oplink_create_new(str);
	else
		list = oplink_create_int(eval_recurse(&str));
	begin = list;
	nextwhitespace(&str);
	while (*str)
	{
		cleanwhitespace(&str);
		if (*str && *str == '(')
			list->next = oplink_create_int(eval_recurse(&str));
		else if (*str && *str != ')')
			list->next = oplink_create_new(str);
		list = list->next;
		while (*str && !(*str == ' ' || *str == ')'))
			str++;
	}
	return (evaluate(begin));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
