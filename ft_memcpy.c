/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:23:53 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/18 17:35:49 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = (unsigned char)src;
		i++;
	}
	return (dest);
}
