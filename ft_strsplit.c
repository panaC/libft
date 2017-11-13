/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:26:50 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 19:19:18 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char	*shift_car(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return ((char*)s);
}

static int	nb_word(char const *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c || i == 0)
		{
			count++;
			s = shift_car(s, c);
		}
		if (!s[i])
			i++;
	}
	i--;
	if (s[i] == c)
		count--;
	return (count);
}

static char	**word_len(char const *s, int count, char **ret, char c)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < count)
	{
		s = shift_car(s, c);
		p = (char*)s;
		while (*s != c && *s)
			s++;
		if ((ret[i] = (char*)ft_memalloc(sizeof(char*) * ((s - p) + 1))))
			return (NULL);
		j = 0;
		while (p != s)
		{
			ret[i][j] = *p;
			p++;
			j++;
		}
		ret[i][j] = '\0';
		i++;
	}
	return (ret);
}

char	**ft_strsplit(char const *s, char c)
{
	int			count;
	char		**ret;

	count = nb_word(s, c);
	if ((ret = ft_memalloc(sizeof(char**) * (count + 1))))
		return (NULL);
	if ((ret = word_len(s, count, ret, c)))
		return (NULL);
	return (ret);
}
