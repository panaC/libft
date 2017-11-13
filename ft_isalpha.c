/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:44:03 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 19:08:11 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

static int		ft_islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int				ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
