/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:47:24 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/15 10:36:08 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "libft.h"

void		ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_bzero((void *)s, ft_strlen(s));
}
