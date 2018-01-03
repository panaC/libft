/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 00:42:09 by pierre            #+#    #+#             */
/*   Updated: 2018/01/03 13:13:14 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <arg.h>

static void		del(void *c, size_t s)
{
	s = 0;
	ft_memdel((void**)&c);
}

void			ft_freearg(t_arg **a)
{
	ft_lstdel(&((*a)->long_param), del);
	ft_lstdel(&((*a)->data_param), del);
	ft_memdel((void**)a);
}
