/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 06:26:14 by aberdal           #+#    #+#             */
/*   Updated: 2026/01/21 06:39:27 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	char		a;
	char		negative;

	negative = '-';
	i = n;
	if (n < 0)
	{
		write(fd, &negative, 1);
		i = -i;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	a = i % 10 + '0';
	write(fd, &a, 1);
}
