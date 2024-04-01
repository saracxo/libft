/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:04:34 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/30 12:56:17 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_first(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != '\0' && set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				j = 0;
				i++;
			}
			if (s1[i] != set[j])
				j++;
		}
		return (i);
	}
	return (0);
}

static int	ft_last(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		while (set[j] != '\0' && i > 0)
		{
			if (s1[i] == set[j])
			{
				j = 0;
				i--;
			}
			if (s1[i] != set[j])
				j++;
		}
		return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		last;
	int		start;
	char	*punt;

	if (!s1 || !set)
		return (0);
	last = ft_last(s1, set);
	start = ft_first(s1, set);
	punt = ft_substr(s1, start, last - start + 1);
	return (punt);
}
