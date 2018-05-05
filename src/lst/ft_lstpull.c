/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 19:19:27 by pleroux           #+#    #+#             */
/*   Updated: 2018/05/05 19:24:27 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_lstpull(t_list **alst)
{
	void	*ret;
	t_list	*tmp;

	ret = NULL;
	if (alst && *alst)
	{
		ret = (*alst)->content;
		tmp = *alst;
		*alst = (*alst)->next;
		ft_memdel(&tmp);
	}
	return (ret);
}
