/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 14:32:39 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-15 14:32:39 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
