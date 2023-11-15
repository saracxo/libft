/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:43:07 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/14 12:20:31 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest < src)
	{
		d = dest;
		s = src;
		while (n--)
		}
		else
		{
			d = dest + (n - 1);
			s = src + (n - 1);
			while (n--)
				;
		}
		return (dest);
	}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	char	buffer[20];

	// Usamos la función ft_memmove para copiar 5 caracteres desde str a buffer.
	ft_memmove(buffer, str, 9);
	// Imprimimos el resultado.
	printf("%s\n", buffer);
	return (0);
}


#include "libft.h"

 void *ft_memmove(void *dest, const void *src, size_t n)
 {
	char *d;
	const char *s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == src)
		return(dest);

	if (s < d) // Si 'src' está antes de 'dest' en memoria,
		copia los datos de derecha a izquierda para evitar superposición.
	{
		while (n--)
			*(d + n) = *(s + n);
		return(dest);
	}
	// Si 'src' no está antes de 'dest' en memoria,
		copia los datos de izquierda a derecha como en memcpy.
	while (n--)
		*d++ = *s++;
	return (dest);
 }

int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	char	dest[28];

	// Usamos la función ft_memmove para copiar 5 caracteres desde str a buffer.
	ft_memmove(dest, str, 15);
	// Imprimimos el resultado.
	printf("%s\n", dest);
	return (0);
}
*/