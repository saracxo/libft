/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:27 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/13 12:48:10 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	// Mientras no hayamos recorrido toda la región de memoria (n bytes).
	{
		// Comprobamos si el byte en la posición actual es igual al byte que buscamos (c).
		if (*((unsigned char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
				// Si encontramos el byte,devolvemos un puntero a esa posición.
		i++;
		// Avanzamos al siguiente byte en la región de memoria.
	}
	return (NULL);
	// Si no encontramos el byte después de recorrer toda la región,devolvemos NULL.
}
