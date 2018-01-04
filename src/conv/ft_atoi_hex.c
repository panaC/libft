/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 11:17:52 by pleroux           #+#    #+#             */
/*   Updated: 2018/01/04 21:28:28 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

t_uint32			ft_atoi_hex(const char *str)
{
	t_uint32		res;
	size_t			i;
	char			*s;

	//printf("FT Atoi hex\n");
	if (!str)
		return (0);
	i = 0;
	s = ft_strdup(str);
	while (i < ft_strlen(s))
	{
		s[i] = ft_toupper(s[i]);
		//printf("%c\t%ld\n", s[i], i);
		i++;
	}
	i = 0;
	//printf("%s\n", s);
	while (ft_isspace(s[i]))
		i++;
	//printf("hello %s %ld\n", s, i);
	if (s[i] == '0' && s[i + 1] && s[i + 1] == 'X' && s[i + 2]
			&& !ft_isspace(s[i + 2]))
		i += 2;
	else
		return (0);
	//printf("hello %s %ld\n", s, i);
	res = (t_uint32)ft_atoi_base(s + i, "0123456789ABCDEF");
	//printf("hello %s\t%x\n", s, res);
	ft_memdel((void**)&(s));
	return (res);
}
