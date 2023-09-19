/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:59:18 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/19 17:02:29 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}

//#include <stdio.h>

// int	main(void)
// {
// 	size_t	n;

// 	char str[] = "Hola Sara";
// 	n = 1;
// 	ft_memset(str, n, 0);
// 	printf("%s\n", str);
// 	return (0);
// }
