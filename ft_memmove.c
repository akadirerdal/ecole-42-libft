/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-13 05:31:20 by aberdal           #+#    #+#             */
/*   Updated: 2026/01/26 14:47:33 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	cpy(unsigned char *d, unsigned const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	rcpy(unsigned char *d, unsigned const char *s, size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if ((d < s))
		cpy(d, s, n);
	else
		rcpy(d, s, n);
	return (dest);
}
