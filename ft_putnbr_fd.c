/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:03:28 by pleroux           #+#    #+#             */
/*   Updated: 2017/11/13 20:15:55 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char *prt;

	prt = ft_itoa(n);
	ft_putstr_fd(prt, fd);
	free(prt);
}
