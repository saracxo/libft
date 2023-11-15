/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:55:16 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/15 13:01:14 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>

int	main(void)
{
	char	destino[15];
	size_t	copiados;

		// buffer de destino. El "búfer de destino" se refiere a una región de memoria en la que se copia una cadena o datos desde otra fuente.
	const char fuente[] = "hola perras que tal el dia jeje jiji";
		// cadena fuente
		copiados = ft_strlcpy(destino, fuente, sizeof(destino));
			printf("destino: %s\n", destino);
			printf("caracteres copiados: %zu\n", copiados);
			printf("fuente: %s\n", fuente);
		return (0);
}
*/