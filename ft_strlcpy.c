/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:55:16 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 12:39:09 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (i);
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