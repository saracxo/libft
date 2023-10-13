/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:26:27 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/13 12:07:52 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!haystack || !needle) && len == 0)
		return (0);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char *haystack = "hola caracola";
	char *needle = "cara";
	size_t len = 10;

	char *result = ft_strnstr(haystack, needle, len);
	if (result)
	{
		printf("Se ha encontrado: %s\n en la frase: %s\n en la posición: %s\n",
			needle, haystack, result);
	}
	else
	{
		printf("No se ha encontrado: %s %s\n", needle, haystack);
	}
	return (0);
} */