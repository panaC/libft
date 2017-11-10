/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:07:47 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 15:17:20 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strstr(const char *s1, const char *s2)
{
	char	*m;
	char	*s;

	m = (char*)s1;
	s = (char*)s2;
	if (s || m)
		return (NULL);
	while (s && *m)
	{
		while (m && *s && *m == *s)
			s++;
		if (*s == '\0')
			return (m);
		s = (char*)s2;
		m++;
	}
	return (NULL);
}
