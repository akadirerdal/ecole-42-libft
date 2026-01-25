/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-13 15:14:01 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-13 15:14:01 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_size);
	if (dstsize <= dest_size)
		return (dstsize + src_size);
	while (src[i] && (dest_size + i + 1 <= dstsize))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (src_size + dest_size);
}
