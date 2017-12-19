/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:37:07 by pierre            #+#    #+#             */
/*   Updated: 2017/12/19 10:53:14 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARG_H
# define _ARG_H

#include <libft.h>

typedef struct				s_arg
{
	t_string				short_param;
	t_list					*long_param;
	t_list					*data_param;
	t_bool					state;
}							t_arg;

t_arg			*ft_get_arg(int ac, char **argv);

#endif
