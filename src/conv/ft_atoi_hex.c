/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 11:17:52 by pleroux           #+#    #+#             */
/*   Updated: 2018/01/04 13:37:21 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_uint32			ft_atoi_hex(const char *s)
{
	t_uint32		res;

	while (ft_isspace(*s))
		s++;
	if (*s == '0' && *(s + 1) && *(s + 1) == 'x' && *(s + 2)
			&& !ft_isspace(*(s + 2)))
		s += 2;
	else
		return (0);
	res = (t_uint32)ft_atoi_base(s, "0123456789ABCDEF");
	return (res);
}
