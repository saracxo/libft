/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:23:53 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/21 11:50:22 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;

	if(!src && !dest)
		return (0);

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[8] = "tonto";
	char dest[8];
	
	ft_memcpy(dest, src, 8);
	printf("%s\n", dest);
	
	return(0);	
}
