/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:41:11 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 10:46:27 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (dest && src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}