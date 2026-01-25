/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:33:37 by aberdal           #+#    #+#             */
/*   Updated: 2026/01/21 01:24:28 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[j] == '\0')
	{
		return (&h[i]);
	}
	while (h[i] && len > i)
	{
		while (h[i + j] == n[j] && n[j] && i + j < len)
		{
			if (n[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
