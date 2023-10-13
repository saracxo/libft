/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:10:51 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 15:36:51 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	while (dest[i] && i < size)
		i++;
	length = i;
	while (src[i - length] && i < size - 1)
	{
		dest[i] = src[i - length];
		i++;
	}
	if (length < size)
		dest[i] = '\0';
	return (length + ft_strlen(src));
}
/*
int	main(void)
{
	char dest[10] = "Hola,";
	const char src[] = "poota";
	size_t size = 20;

	size_t result = ft_strlcat(dest, src, size);

	printf("%s\n", dest);

	return (0);
}
*/