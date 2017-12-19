/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setparam_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:56:00 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 16:01:43 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>

t_bool			ft_setparam_int(t_arg *a, char *s, int *ptr, int data)
{
	t_list *tmp;

	if (ft_lststrfind(a->long_param, &tmp, s))
		*ptr = ft_atoi(ft_getparam_data(tmp));
	else
		*ptr = data;
	return (TRUE);
}
