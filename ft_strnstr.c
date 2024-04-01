/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:26:27 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/30 12:42:27 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_strlen(needle) < 1)
		return ((char *)haystack);
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (!(needle[j]))
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}
