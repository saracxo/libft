/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:43:07 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/15 12:17:12 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_ptr;
	char	*dst_ptr;

	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	if (src_ptr < dst_ptr)
	{
		while (n > 0)
		{
			n--;
			dst_ptr[n] = src_ptr[n];
		}
	}
	else
		ft_memcpy(dst_ptr, src_ptr, n);
	return (dst);
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
*/