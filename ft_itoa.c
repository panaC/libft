/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:23:25 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 19:37:39 by pleroux          ###   ########.fr       */
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
	size_t		len;

	len = len(n);
	if ((ret = ft_strnew(len)))
		return (NULL);
	while ()

}
