/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:16:56 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/11 18:35:45 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strcat(char *dest, const char *src)
{
	char		*ret;

	ret = dest;
	while (*dest)
		dest++;
	ft_strcpy(dest, src);
	return (ret);
}
