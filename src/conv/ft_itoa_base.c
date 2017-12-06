/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <pleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:46:01 by pleroux           #+#    #+#             */
/*   Updated: 2017/12/06 11:48:40 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_intlen_base(unsigned int n, int base)
{
	size_t			i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

char		*ft_itoa_base(unsigned int value, int base, char *basestr)
{
	size_t			size;
	size_t			i;
	char			*tmp;

	size = ft_intlen_base(value, base);
	if (!(tmp = (char*)ft_memalloc(sizeof(char) * size + 1)))
		return (NULL);
	tmp[size] = '\0';
	if (!value)
		tmp[0] = '0';
	i = size - 1;
	while (value)
	{
		tmp[i] = basestr[value % base];
		value = value / base;
		i--;
	}
	return (tmp);
}

