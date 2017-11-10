/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:03:30 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 09:16:42 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		*ft_memcpy(void *dest, const void *src, size_t n)
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

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	tmp[n];

	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}