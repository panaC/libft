/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:10:59 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 17:12:20 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

t_bool			ft_setparam_hex(t_arg *a, char *s, int *ptr, int data)
{
	t_list *tmp;

	if (ft_lststrfind(a->long_param, &tmp, s))
		*ptr = ft_atoi_base(ft_getparam_data(tmp), "0123456789ABCDEF");
	else
		*ptr = data;
	return (TRUE);
}
