/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vect_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 09:16:25 by pierre            #+#    #+#             */
/*   Updated: 2017/12/20 09:18:03 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

t_vect				*ft_vect_new(int x, int y, int z)
{
	t_vect			*ret;

	if ((!(ret = (t_vect*)ft_memalloc(sizeof(*ret)))))
		return (NULL);
	return(ft_vect_init(ret, x, y, z));
}
