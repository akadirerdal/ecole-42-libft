/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 15:29:35 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-25 15:29:35 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone((t_list *lst), void(*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
