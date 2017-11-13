/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:56:31 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 10:12:56 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t		t;

	t = ft_strlen((char*)s);
	while (t && s[t] != (unsigned char)c)
		t--;
	return ((t != 0)? ((char*)s + t):(NULL));
}
