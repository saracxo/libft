/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:46:58 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/20 12:23:15 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len && s[start])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = 0;
	return (ptr);
}

/*
int	main(void)
{
	char	*h;

	h = "Hola";
	printf("%s\n", ft_substr(h, 2, 1));
}
*/