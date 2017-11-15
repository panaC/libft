/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:03:30 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/15 13:43:38 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	tmp[n];

	if (n >= (1024 * 1024 * 128))
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}
