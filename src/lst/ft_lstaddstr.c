/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:30:43 by pleroux           #+#    #+#             */
/*   Updated: 2018/01/09 15:58:55 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstaddstr(t_list **alst, t_string s)
{
	ft_lstadd(alst, ft_lstnew(s, ft_strlen(s) + 1));
}
