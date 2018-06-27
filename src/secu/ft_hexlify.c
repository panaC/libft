/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlify.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:48:56 by pierre            #+#    #+#             */
/*   Updated: 2018/06/27 19:55:19 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string			ft_hexlify(const t_string str)
{
	t_string		s;
	t_string		stmp;
	int				i;

	i = 0;
	s = ft_strnew(ft_strlen(str) * 2 + 1);
	while (s && str && str[i])
	{
		stmp = ft_itoa_base(str[i], "0123456789abcdef");
		s = ft_strncat(s, stmp, 2);
		ft_strdel(&stmp);
		++i;
	}
	return (s);
}
