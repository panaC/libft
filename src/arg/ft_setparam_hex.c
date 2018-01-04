/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:10:59 by pierre            #+#    #+#             */
/*   Updated: 2018/01/04 16:31:48 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

t_bool			ft_setparam_hex(t_arg *a, char *s, t_uint32 *ptr, t_uint32 data)
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
		*ptr = ft_atoi_hex(str);
	}
	else
		*ptr = data;
	return (TRUE);
}
