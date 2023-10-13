/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:17:30 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 12:39:12 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%lu", ft_strlen("barbara"));
	return (0);
}
*/