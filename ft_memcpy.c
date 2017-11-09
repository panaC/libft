/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:29:03 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/09 13:56:55 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ret;
	unsigned char	*src_cpy;

	ret = (unsigned char*)dest;
	src_cpy = (unsigned char*)src;
	while (n)
	{
		ret[n - 1] = src_cpy[n - 1];
		n--;
	}
	return (ret);
}
