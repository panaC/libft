/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_doubleint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:06:03 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 17:15:10 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

#include <stdio.h>

t_bool			ft_setparam_doubleint(t_arg *a, char *s, int *ptr, int data, int i)
{
	t_list		*tmp;
	char		**ss;

	if (ft_lststrfind(a->long_param, &tmp, s))
	{
		ss = ft_strsplit(ft_getparam_data(tmp), ',');
		if (ss[0] && ss[1])
			*ptr = ft_atoi(ss[i % 2]);
		else
			*ptr = data;
	}
	else
		*ptr = data;
	return (TRUE);
}
