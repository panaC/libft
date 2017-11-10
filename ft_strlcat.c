/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:21:49 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 14:34:26 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		ft_strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		td;
	size_t		ts;

	i = 0;
	td = ft_strlen(dest);
	ts = ft_strlen(src);
	if (td >= size)
		return (size + ts);
	while (td + i < size - 1)
	{
		dest[td + i] = src[i];
		i++;
	}
	dest[td + i] = '\0';
	return (td + ts);
}
