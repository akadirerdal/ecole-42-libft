/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-13 05:20:56 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-13 05:20:56 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
