/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:02:19 by sarcasti          #+#    #+#             */
/*   Updated: 2023/09/28 12:49:03 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == character)
			return ((char*)str);
		++str;
	}
	return (NULL);
}

int main(void)
{
    printf("%s\n", ft_strchr("cacaguate",'u'));
    return(0);
}