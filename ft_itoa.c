/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:23:25 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 19:57:22 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int		len(n)
{
	int		len;

	len = 0;
	if(n < 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char * 			ft_itoa(int n)
{
	char		*ret;
	int			l;
	int			neg;

	if (n < 0)
		neg = 1;
	l = len(n);
	if ((ret = ft_strnew(l)))
		return (NULL);
	while (l >= 0)
	{
		ret[l] = n % 10;
		n /= 10;
		l--;
	}
	if (neg)
		ret[0] = '-';
	return (ret);
}
