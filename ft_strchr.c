/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:02:19 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/16 10:50:02 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	char	*d;
	int		i;

	if (!str)
		return (0);
	d = (char *)str;
	i = 0;
	while (d[i])
	{
		if (d[i] == (unsigned char)character)
			return (d + i);
		i++;
	}
	if (character == '\0')
		return (d + i);
	return (0);
}

/*
int	main(void)
{
	printf("%s\n", ft_strchr("cacaguate", 'u'));
	return (0);
}
*/