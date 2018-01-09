/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_doubleint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:06:03 by pierre            #+#    #+#             */
/*   Updated: 2018/01/09 19:38:10 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

t_bool			ft_setparam_doubleint(t_arg *a, t_string s, int *ptr, int data)
{
	t_string	*ss;
	t_string	str;
	static int	i = 0;

	if (!(a || s || ptr))
		return (FALSE);
	*ptr = data;
	if (ft_search_param(a->long_param, &str, s))
	{
		if (str)
		{
			ss = ft_strsplit(ft_split_longparam(str, 1, TRUE), ',');
			if (ss[0] && ss[1])
				*ptr = (ft_atoi(ss[i % 2]) < 3000) ? ft_atoi(ss[i % 2]) : data;
		}
		i = (!i) & 0x1;
	}
	return (TRUE);
}
