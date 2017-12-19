/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:03:17 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 16:52:52 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string		ft_getparam_data(t_list *n)
{
	char		**s;

	if (!n)
		return (NULL);
	s = ft_strsplit((char*)n->content, '=');
	if (s[0] && s[1])
		return (s[1]);
	return (NULL);
}
