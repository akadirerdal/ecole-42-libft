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

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	size_t			i;
	size_t			total;
	unsigned char	*tmp;

	i = 0;
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total = (nmemb * size);
	p = malloc(total);
	if (!p)
		return (NULL);
	tmp = (unsigned char *)p;
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (p);
}
