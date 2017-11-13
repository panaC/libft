/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:45 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 11:51:37 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*m;
	char	*s;
	size_t	i;
	size_t	j;

	m = (char*)s1;
	s = (char*)s2;
	i = 0;
	j = 0;
	if (!*s)
		return (m);
	while (m[i] && i <= n)
	{
		j = 0;
		while (s[j] && s[j] == m[i + j] && (i + j) <= n)
			j++;
		if (s[j] == '\0')
			return (m + i);
		i++;

	}
	return (NULL);
}
