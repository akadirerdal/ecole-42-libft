/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-13 06:12:21 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-13 06:12:21 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*last;

	ch = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == ch)
		{
			last = (char *)s;
		}
		s++;
	}
	if (ch == '\0')
	{
		last = (char *)s;
	}
	return (last);
}
