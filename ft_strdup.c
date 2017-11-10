/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:38:31 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 10:39:04 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = NULL;
	if (!src)
		return (NULL);
	s = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
