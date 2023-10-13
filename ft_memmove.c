/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:43:07 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 15:40:57 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Incluimos el archivo de encabezado de "libft" para asegurarnos de tener acceso a las definiciones necesarias.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;       // Puntero para tratar 'dest' como un arreglo de caracteres.
	const char *s; // Puntero para tratar 'src' como un arreglo de caracteres.
	if (dest < src)
	// Si 'dest' está antes de 'src' en memoria (sin superposición).
	{
		d = dest;   // Asignamos 'dest' a 'p' para iniciar desde el principio.
		s = src;    // Asignamos 'src' a 'q' para iniciar desde el principio.
		while (n--) // Copiamos 'n' bytes de 'src' a 'dest'.
			*d++ = *s++;
	}
	else
	// Si 'src' está antes o en la misma posición que 'dest' en memoria (posible superposición).
	{
		d = dest + (n - 1); // Apuntamos al último byte de 'dest'.
		s = src + (n - 1);  // Apuntamos al último byte de 'src'.
		while (n--)         // Copiamos 'n' bytes de 'src' a 'dest',
			de derecha a izquierda para evitar superposición.*d-- = *s--;
	}
	return (dest); // Devolvemos 'dest' después de realizar la copia.
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