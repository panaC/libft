/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_longparam.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:41:36 by pleroux           #+#    #+#             */
/*   Updated: 2018/01/11 21:54:51 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <arg.h>
#include <stdlib.h>
#include <stdio.h>

static void		d(void *a, size_t s)
{
	s = 0;
	free(a);
}

t_bool			ft_check_longparam(t_list *arg, t_list *src, t_bool del)
{
	size_t		nb;
	t_list		*l;

	l = src;
	nb = 0;
	while (src)
	{
		if (ft_search_param(arg, NULL, (t_string)src->content))
			nb++;
		src = src->next;
	}
	if (del)
		ft_lstdel(&l, d);
	return (nb == ft_lstlen(arg));
}
