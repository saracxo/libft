/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:02:19 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/11 15:36:36 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == character)
			return ((char *)str);
		++str;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("cacaguate", 'u'));
	return (0);
}
*/