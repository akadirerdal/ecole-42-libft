/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 06:18:31 by aberdal           #+#    #+#             */
/*   Updated: 2026/01/22 15:50:46 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	tmp = (unsigned char *)p;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (p);
}
