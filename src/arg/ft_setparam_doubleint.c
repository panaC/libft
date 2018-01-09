/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_doubleint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:06:03 by pierre            #+#    #+#             */
/*   Updated: 2018/01/09 11:40:51 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

#include <stdio.h>

t_bool			ft_setparam_doubleint(t_arg *a, char *s, int *ptr, int data)
{
	t_list		*tmp;
	char		**ss;
	t_string	str;
	static int	i = 0;

	if (ft_lststrfind(a->long_param, &tmp, s))
	{
		str = ft_getparam_data(tmp);
		if (!str)
		{
			*ptr = data;
			i = ((i == 1) ? 0 : 1);
			return (TRUE);
		}
		ss = ft_strsplit(str, ',');
		if (ss[0] && ss[1])
			*ptr = ft_atoi(ss[i % 2]);
		else
			*ptr = data;
	}
	else
		*ptr = data;
	return (TRUE);
}
