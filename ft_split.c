/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-18 00:10:45 by aberdal           #+#    #+#             */
/*   Updated: 2026-01-18 00:10:45 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static void	free_split(char **a, int k)
{
	while (k--)
		free (a[k]);
	free (a);
}

static int	fill(char **a, char const *s, char c)
{
	int	i;
	int	j;
	int	st;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			st = i;
			while (s[i] && s[i] != c)
				i++;
			a[j] = ft_substr(s, st, i - st);
			if (!a [j])
				return (free_split(a, j), 0);
			j++;
		}
	}
	a[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**a;

	if (!s)
		return (NULL);
	a = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!a)
		return (NULL);
	if (!fill(a, s, c))
		return (NULL);
	return (a);
}
