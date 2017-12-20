/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vect_unit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 09:21:13 by pierre            #+#    #+#             */
/*   Updated: 2017/12/20 09:22:06 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

t_vect*				ft_vect_unit(t_vect *v)
{
	double			norm;

	norm = ft_vect_norm(v);
	if (norm > 0)
	{
		norm = 1 / norm;
		v->x *= norm;
		v->y *= norm;
		v->z *= norm;
	}
	return (v);
}
