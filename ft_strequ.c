/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:47:25 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 15:27:48 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	return ((ft_strcmp(s1, s2) == 0)? 1:0);
}
