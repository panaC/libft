/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:21:55 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/10 19:23:53 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c +=32;
	return (c);
}