/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:17:32 by pierre            #+#    #+#             */
/*   Updated: 2017/12/18 16:32:06 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_string			ft_strccat(t_string s, char c)
{
	t_string		*ptr;
	size_t			size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if ((!(ptr = ft_memalloc(size + 2))))
		return (NULL);
	ptr = ft_strncpy(ptr, s, size);
	ptr[size] = c;
	ptr[size + 1] = '\0';
	ft_memdel(&s);
	s = ptr;
	return (s);
}
