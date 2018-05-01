/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:42:47 by pleroux           #+#    #+#             */
/*   Updated: 2018/05/01 11:31:17 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_strlennb(const char *nptr)
{
	int			i;

	i = 0;
	if (!nptr)
		return (0);
	while (nptr[i] && ft_isspace((int)nptr[i]))
		i++;
	if (nptr[i] == '-')
		i++;
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	return (i);
}
