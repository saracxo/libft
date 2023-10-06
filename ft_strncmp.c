/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:25:28 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/06 16:23:00 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*str1 - *str2 != 0)
			return ((unsigned char) *str1 - (unsigned char) *str2); // uns char es para convertir los valores en positivo siempre. La resta es la diferencia en valores ASCII. 
		str1++;
		str2++;
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char str1[] = "uno";
	char str2[] = "dos";

	printf();
	return (0);
}
