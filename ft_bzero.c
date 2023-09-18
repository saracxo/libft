/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:27 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/18 16:48:05 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main(void)
{
	size_t	n;

	char str[] = "Hola Sara";
	n = 1;
	ft_bzero(str, 4);
	printf("%s\n", str);
	return (0);
}