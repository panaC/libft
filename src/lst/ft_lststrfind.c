/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrfind.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 14:56:00 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 16:52:25 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

t_bool		ft_lststrfind(t_list *l, t_list **r, t_string s)
{
	while (l)
	{
		if (ft_strstr((t_string)l->content, s))
		{
			*r = l;
			return (TRUE);
		}
		l = l->next;
	}
	return (FALSE);
}
