/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:46:58 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/15 11:53:05 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*mem;

	if (!s)
		return (NULL);
	mem = ft_calloc(len + 1, sizeof(char));
	if (!mem)
		return (NULL);
	i = 0;
	--start;
	while (s[i] && i < (int)len)
	{
		mem[i] = s[start + i];
		i++;
	}
	return (mem);
}

/*
int	main(void)
{
	char	*h;

	h = "Hola";
	printf("%s\n", ft_substr(h, 2, 1));
}
*/