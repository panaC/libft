/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:56:31 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 15:05:21 by pleroux          ###   ########.fr       */
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

char		*ft_strrchr(const char *s, int c)
{
	size_t		t;

	t = ft_strlen((char*)s) - 1;
	while (s && s[t] && s[t] != (char)c)
		t--;
	return ((char*)s + t);
}
