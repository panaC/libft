/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:37:07 by pierre            #+#    #+#             */
/*   Updated: 2018/01/03 18:18:53 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARG_H
# define _ARG_H

# include <libft.h>

typedef struct	s_arg
{
	t_string	short_param;
	t_list		*long_param;
	t_list		*data_param;
	t_bool		state;
}				t_arg;

t_arg			*ft_get_arg(int ac, char **argv);
t_string		ft_getarg_data(t_list *n);
t_string		ft_getparam_data(t_list *n);
t_bool			ft_setparam_int(t_arg *a, char *s, int *ptr, int data);
t_bool			ft_setparam_doubleint(t_arg *a, char *s, int *ptr, int data,
		int i);
t_bool			ft_setparam_hex(t_arg *a, char *s, int *ptr, int data);
void			ft_freearg(t_arg **a);
#endif
