/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:33:37 by aberdal           #+#    #+#             */
/*   Updated: 2026/01/26 14:24:04 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	j = 0;
	if (l[j] == '\0')
	{
		return (&b[i]);
	}
	while (b[i] && len > i)
	{
		while (b[i + j] == l[j] && l[j] && i + j < len)
		{
			if (l[j + 1] == '\0')
				return (&b[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
