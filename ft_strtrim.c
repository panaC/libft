/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:02:27 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 17:14:03 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int		f_isspace(int c)
{
	if(c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		t;
	char		*ret;

	if (!s)
		return (NULL);
	i = 0;
	t = ft_strlen(s);
	j = t;
	while (s[i] && f_isspace((int)s[i]))
		i++;
	while (j && f_isspace((int)s[j - 1]))
		j--;
	if (i == t && j == 0)
	{
		ret = ft_strnew(0);
		if (!ret)
			return (NULL);
		return (ret);
	}
	ret = ft_strnew(j - i);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + i, j - i));
}
