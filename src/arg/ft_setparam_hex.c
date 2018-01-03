/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:10:59 by pierre            #+#    #+#             */
/*   Updated: 2018/01/03 18:32:10 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

t_bool			ft_setparam_hex(t_arg *a, char *s, int *ptr, int data)
{
	t_list		*tmp;
	t_string	str;

	if (ft_lststrfind(a->long_param, &tmp, s))
	{
		str = ft_getparam_data(tmp);
		if (!str)
		{
			*ptr = data;
			return (TRUE);
		}
		*ptr = ft_atoi_base(str, "0123456789ABCDEF");
	}
	else
		*ptr = data;
	return (TRUE);
}
