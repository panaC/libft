/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextobase64.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:19:46 by pleroux           #+#    #+#             */
/*   Updated: 2018/06/30 13:39:37 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <stdio.h>
t_string		ft_hextobase64(const t_string encod)
{
	t_string	s;
	t_int		val;
	size_t		i;

	i = 0;
	s = ft_strnew((ft_strlen(encod) / 3 * 4) + 5);
	while (s && encod[i] && encod[i + 1] && encod[i + 2])
	{
		val.v64 = 0;
		val.v[2] = encod[i];
		val.v[1] = encod[i + 1];
		val.v[0] = encod[i + 2];
		printf("->%x\n", val.v32);
	}
	return (s);
}
